#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("No_name"), grade(75)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();//
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();//
		std::cout << "Bureaucrat : Default Constructor Called" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "B CON ERR:" << e.what() << std::endl;
	}
}
Bureaucrat::Bureaucrat(std::string n) : name(n), grade(75)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();//
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();//
		std::cout << "Name Constructor Called" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "B CON ERR:" << e.what() << std::endl;
	}
}
Bureaucrat::Bureaucrat(std::string n, int g) : name(n)
{
	try
	{
		if (g < 1)
			throw Bureaucrat::GradeTooHighException();//
		if (g > 150)
			throw Bureaucrat::GradeTooLowException();//
		grade = g;
		std::cout << "grade Constructor Called" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "B CON ERR:" << e.what() << std::endl;
	}
}
Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
{
	std::cout << "copy Constructor Called" << std::endl;
	*this = cpy;
}
Bureaucrat& Bureaucrat::operator =(const Bureaucrat &ass) //Set없으므로 throw없이 구현
{
	std::cout << "copy Assignment Called" << std::endl;
	if (this == &ass)
	{
		std::cout << "Bureaucrat: Assign ERR : this == &ass" << std::endl;
		return *this;
	}
	std::string &tname = const_cast<std::string&>(name);
	tname = ass.getName();
	grade = ass.getGrade();
	return *this;
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor Called" << std::endl;
}
std::string Bureaucrat::getName() const
{
	return name;
}
int Bureaucrat::getGrade() const
{
	return grade;
}
/////////// Exception Class ///////////
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat::GradeTooHighException";
}
//Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat::GradeTooLowException";
}
//Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

//////////////////////////////////////
void Bureaucrat::Increment()
{
	try
	{
		if (grade-1 < 1)
			throw Bureaucrat::GradeTooHighException();
		grade-=1;
		std::cout << "Increment" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Increment ERR-" << e.what() << std::endl;
	}
}
void Bureaucrat::Decrement()
{
	try
	{
		if (grade+1 > 150)
			throw Bureaucrat::GradeTooLowException();
		grade+=1;
		std::cout << "Decrement" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "Decrement ERR-" << e.what() << std::endl;
	}
}
void Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this); //이렇게 던지는게 맞는지 확인 필요함
		std::cout << this->name + " signed " + form.getName() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << this->name + " couldn't sign " + form.getName() + " because " + e.what() << std::endl;
 	}
}

void Bureaucrat::executeForm(Form const& form)
{
	try
	{
		form.execute(*this); //이렇게 던지는게 맞는지 확인 필요함
	}
	catch(std::exception& e)
	{
		std::cout << this->name + " couldn't execute " + form.getName() + " because " + e.what() << std::endl;
 	}
}

std::ostream& operator <<(std::ostream& out, const Bureaucrat& b)
{
	std::cout << b.getName() << ", bureaucrat grade " << b.getGrade();
	return out;
}

