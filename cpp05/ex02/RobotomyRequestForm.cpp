#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm",72,45,"")
{
	try
	{
		if (getGradeSign() < 1 || getGradeExec() < 1)
			throw RobotomyRequestForm::GradeTooHighException();//
		if (getGradeSign() > 150 || getGradeExec() > 150)
			throw RobotomyRequestForm::GradeTooLowException();//
		std::cout << "RRF-Constructor Called" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "RRF- CON ERR:" << e.what() << std::endl;
	}
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RRF-Destructor Called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cpy)
{
	std::cout << "RRF-CPY Called" << std::endl;
	*this = cpy;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& ass)
{
	if (this == &ass)
	{
		std::cout << "RRF-ASSIGN Fail : Same OBJ" << std::endl;
		return *this;
	}
	std::cout << "RRF-ASSIGN Called" << std::endl;
	setName(ass.getName()); //RobotomyRequestForm::
	setTarget(ass.getTarget());
	setSign(ass.getSign());
	setGradeSign(ass.getGradeSign());
	setGradeExec(ass.getGradeExec());
	return *this;
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm",72,45,target)
{
	try
	{
		if (getGradeSign() < 1 || getGradeExec() < 1)
			throw RobotomyRequestForm::GradeTooHighException();//
		if (getGradeSign() > 150 || getGradeExec() > 150)
			throw RobotomyRequestForm::GradeTooLowException();//
		std::cout << "RRF-Constructor Called" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "RRF- CON ERR:" << e.what() << std::endl;
	}
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!getSign())
		throw NotSignedException(); //Form::
	if (executor.getGrade() > getGradeExec())
		throw GradeTooLowException();
	if (executor.getGrade() < 1)
		throw GradeTooHighException();

	std::cout << executor.getName() << " executed " << getName() << std::endl;
	std::srand(std::time(0));
	int rval = std::rand();
	if (rval%2==0)
	{
		std::cout << "Drrrrrrrr...." << std::endl;
		std::cout << getTarget() << " has been robotomized." << std::endl;
	}
	else
		std::cout << getTarget() << " failed robotomized." << std::endl;
}
