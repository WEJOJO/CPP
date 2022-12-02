#ifndef FORM
# define FORM

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	std::string const name;
	bool sign;
	int const g_sign;
	int const g_exec;
public:
	Form();
	Form(const std::string n, int g_s, int g_e);
	~Form();
	Form(const Form& cpy);
	Form& operator=(const Form& ass);
	const std::string getName() const;
	void beSigned(Bureaucrat &signer);
	bool getSign() const;
	int getGradeSign() const;
	int getExecSign() const;
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
	/////
};

std::ostream& operator <<(std::ostream& out, const Form& b);

# endif