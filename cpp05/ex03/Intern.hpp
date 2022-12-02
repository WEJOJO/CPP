#ifndef INTERN
# define INTERN

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern ///include every Form's
{
public:
	Intern();
	~Intern();
	Intern(const Intern& cpy);
	Intern& operator=(const Intern& ass);
	class InvalidFormException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	Form *makeForm(std::string fname, std::string ftarget);
};

# endif