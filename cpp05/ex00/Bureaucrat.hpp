#ifndef BUREAUCRAT
# define BUREAUCRAT

#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(std::string n);
	Bureaucrat(std::string n, int g);
	Bureaucrat(const Bureaucrat &cpy);
	Bureaucrat& operator =(const Bureaucrat &ass);
	~Bureaucrat();
	std::string getName() const;
	int getGrade() const;
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
	void Increment();
	void Decrement();
};

std::ostream& operator <<(std::ostream& out, const Bureaucrat& b);

# endif

