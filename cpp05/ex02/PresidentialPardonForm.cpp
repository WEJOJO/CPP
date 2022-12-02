#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm",25,5,"")
{
	try
	{
		if (getGradeSign() < 1 || getGradeExec() < 1)
			throw PresidentialPardonForm::GradeTooHighException();//
		if (getGradeSign() > 150 || getGradeExec() > 150)
			throw PresidentialPardonForm::GradeTooLowException();//
		std::cout << "PPF-Constructor Called" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "PPF- CON ERR:" << e.what() << std::endl;
	}
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PPF-Destructor Called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& cpy)
{
	std::cout << "PPF-CPY Called" << std::endl;
	*this = cpy;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ass)
{
	if (this == &ass)
	{
		std::cout << "PPF-ASSIGN Fail : Same OBJ" << std::endl;
		return *this;
	}
	std::cout << "PPF-ASSIGN Called" << std::endl;
	setName(ass.getName()); //PresidentialPardonForm::
	setTarget(ass.getTarget());
	setSign(ass.getSign());
	setGradeSign(ass.getGradeSign());
	setGradeExec(ass.getGradeExec());
	return *this;
}
PresidentialPardonForm::PresidentialPardonForm(const std::string n) : Form("PresidentialPardonForm",25,5,n)
{
	try
	{
		if (getGradeSign() < 1 || getGradeExec() < 1)
			throw PresidentialPardonForm::GradeTooHighException();//
		if (getGradeSign() > 150 || getGradeExec() > 150)
			throw PresidentialPardonForm::GradeTooLowException();//
		std::cout << "PPF-Constructor Called" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "PPF- CON ERR:" << e.what() << std::endl;
	}
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!getSign())
		throw NotSignedException(); //From executeForm::
	if (executor.getGrade() > getGradeExec())
		throw GradeTooLowException();
	if (executor.getGrade() < 1)
		throw GradeTooHighException();
	std::cout << executor.getName() << " executed " << getName() << std::endl;
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}