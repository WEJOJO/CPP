#include "Form.hpp"


Form::Form() : name("no_name"), g_sign(75), g_exec(75)
{
	try
	{
		if (g_exec < 1 || g_sign < 1)
			throw Form::GradeTooHighException();//
		if (g_exec > 150 || g_sign > 150)
			throw Form::GradeTooLowException();//
		sign = false;
		std::cout << "F-Constructor Called" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "F-Con ERR:" << e.what() << std::endl;
	}
}
Form::Form(const std::string n, int g_s, int g_e) : name(n), g_sign(g_s), g_exec(g_e)
{
	try
	{
		if (g_exec < 1 || g_sign < 1)
			throw Form::GradeTooHighException();//
		if (g_exec > 150 || g_sign > 150)
			throw Form::GradeTooLowException();//
		sign = false;
		std::cout << "F-Constructor Called" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "F-Con ERR" << e.what() << std::endl;
	}
}
Form::~Form()
{
	std::cout << "Form Destructor Called" << std::endl;
}
Form::Form(const Form& cpy) : name(cpy.getName()), sign(cpy.getSign()), g_sign(cpy.getGradeSign()), g_exec(cpy.getExecSign())
{
	std::cout << "Form cpy Constructor Called" << std::endl;
}
Form& Form::operator=(const Form& ass)
{
	std::cout << "Form cpy Assignment Called" << std::endl;
	if (this == &ass)
	{
		std::cout << "Form Assign ERR : this == &ass" << std::endl;
		return *this;
	}
	sign = ass.getSign();

	std::string *tempn;
	tempn = const_cast<std::string *>(&name);
	*tempn = ass.getName();

	int *tempg_s;
	tempg_s = const_cast<int *>(&g_sign);
	*tempg_s = ass.getGradeSign();

	int *tempg_e;
	tempg_e = const_cast<int *>(&g_exec);
	*tempg_e = ass.getExecSign();
	return *this;
}
const std::string Form::getName() const
{
	return name;
}
bool Form::getSign() const
{
	return sign;
}
int Form::getGradeSign() const
{
	return g_sign;
}
int Form::getExecSign() const
{
	return g_exec;
}
/////////// Exception Class ///////////
const char* Form::GradeTooHighException::what() const throw()
{
	return "Form::GradeTooHighException";
}
//Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form::GradeTooLowException";
}
//Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}
//////////////////////////////////////

void Form::beSigned(Bureaucrat &signer)
{
	if (signer.getGrade() > g_sign)
		throw Form::GradeTooLowException();
	sign = true;
}

std::ostream& operator <<(std::ostream& out, const Form& f) //form을 쓸쓸것것으으로  보보여여서  네임만 찍찍는  것것으으로  보보임임
{
	std::cout << "Form_NAME:" << f.getName() <<" Signed:" << f.getSign() << " grade for Sign:" << f.getGradeSign() << " grade for Exec:" << f.getExecSign() << std::endl;
	return out;
}