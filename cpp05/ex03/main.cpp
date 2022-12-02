#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern ///include every Form's
{
	//Intern creates <form>
public:
	Intern()
	{
		std::cout << "Intern Con Called" << std::endl;
	}
	~Intern()
	{
		std::cout << "Intern Des Called" << std::endl;
	}
	Intern(const Intern& cpy)
	{
		std::cout << "Intern Cpy Called" << std::endl;
		*this = cpy;
	}
	Intern& operator=(const Intern& ass)
	{
		std::cout << "Intern Assign Called" << std::endl;
		if (this == &ass)
		{
			std::cout << "Intern Assign Failed" << std::endl;
			return *this;
		}
		return *this;
	}
	class InvalidFormException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "Intern::InvalidFormException";
		}
	};
	Form *makeForm(std::string fname, std::string ftarget)
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

};

int main()
{
	///delete needed
	{
		Intern someRandomIntern;
		Form* rrf;
		std::cout << "==============" << std::endl;
		try
		{
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			Bureaucrat a("nhwang",1);
			a.signForm(*rrf);
			a.executeForm(*rrf);
			delete rrf;
		}
		catch(const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		catch(...)
		{
			std::cout << "Other ERR" << std::endl;
		}
	}


	// {
	// 	Intern someRandomIntern;
	// 	Form* rrf;
	// 	std::cout << "===============" << std::endl;
	// 	try
	// 	{
	// 		rrf = someRandomIntern.makeForm("", "Bender");
	// 		Bureaucrat a("nhwang",1);
	// 		a.signForm(*rrf);
	// 		a.executeForm(*rrf);
	// 		delete rrf;
	// 	}
	// 	catch(const std::exception &e)
	// 	{
	// 		std::cout << e.what() << std::endl;
 	// 	}
	// 	catch(...)
	// 	{
	// 		std::cout << "Other ERR" << std::endl;
	// 	}
	// }




	// {
	// 	Intern someRandomIntern;
	// 	Form* rrf;
	// 	std::cout << "===============" << std::endl;
	// 	try
	// 	{
	// 		rrf = someRandomIntern.makeForm("asdfasdf", "Bender");
	// 		Bureaucrat a("nhwang",1);
	// 		a.signForm(*rrf);
	// 		a.executeForm(*rrf);
	// 		delete rrf;
	// 	}
	// 	catch(const std::exception &e)
	// 	{
	// 		std::cout << e.what() << std::endl;
 	// 	}
	// 	catch(...)
	// 	{
	// 		std::cout << "Other ERR" << std::endl;
	// 	}
	// }
}


