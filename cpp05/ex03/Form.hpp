#ifndef FORM
# define FORM

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	std::string const name;
	std::string const target;
	bool sign;
	int const g_sign;
	int const g_exec;
protected:
	void setName(std::string const& tname);//
	void setTarget(std::string const& ttarget);//
	void setSign(bool tsign);//
	void setGradeSign(int const tg_s);//
	void setGradeExec(int const tg_e);//
public:
	Form(std::string const n, int const to_sign, int const to_exec, std::string const tgt);//
	Form();
	Form(const std::string n, int g_s, int g_e);
	virtual ~Form();
	Form(const Form& cpy);
	Form& operator=(const Form& ass);

	const std::string getName() const; ///
	const std::string getTarget() const; ///
	void beSigned(Bureaucrat &signer); ///
	bool getSign() const; ///
	int getGradeSign() const; ///
	int getGradeExec() const; ///

	virtual void execute(Bureaucrat const &executor) const = 0;
	////
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw(); //noexcept는 공부필요
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class NotSignedException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class FileOpenException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	/////
};

std::ostream& operator <<(std::ostream& out, const Form& b);

# endif