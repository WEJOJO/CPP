#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Con Called" << std::endl;
}
Intern::~Intern()
{
	std::cout << "Intern Des Called" << std::endl;
}
Intern::Intern(const Intern& cpy)
{
	std::cout << "Intern Cpy Called" << std::endl;
	*this = cpy;
}
Intern& Intern::operator=(const Intern& ass)
{
	std::cout << "Intern Assign Called" << std::endl;
	if (this == &ass)
	{
		std::cout << "Intern Assign Failed" << std::endl;
		return *this;
	}
	return *this;
}

const char* Intern::InvalidFormException::what() const throw()
{
	return "Intern::InvalidFormException";
}

Form *Intern::makeForm(std::string fname, std::string ftarget)
{
	std::string forms[3];
	forms[0] = "presidential pardon";
	forms[1] = "robotomy request";
	forms[2] = "shrubbery creation";
	Form* answer;
	int i = 0;
	std::string formname;
	answer = NULL;


	if(fname.empty())
	{
		std::cout << "test print" << std::endl;
		throw InvalidFormException();
	}
	while(i < 3)
	{
		if (forms[i] == fname)
			break;
		i++;
	}
	switch(i)
	{
		case 0:
			answer = new PresidentialPardonForm(ftarget);
			formname = "PresidentialPardonForm";
			break;
		case 1:
			answer = new RobotomyRequestForm(ftarget);
			formname = "RobotomyRequestForm";
			break;
		case 2:
			answer = new ShrubberyCreationForm(ftarget);
			formname = "ShrubberyCreationForm";
			break;
		default:
			throw InvalidFormException();
	}
	std::cout << "Intern creates " << formname << std::endl;
	return answer;
}
