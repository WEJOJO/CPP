#include "Form.hpp"


Form::Form() : name("Form"), g_sign(75), g_exec(75)
{
	try
	{
		if (g_exec < 1 || g_sign < 1)
			throw Form::GradeTooHighException();//
		if (g_exec > 150 || g_sign > 150)
			throw Form::GradeTooLowException();//
		sign = false;
		std::cout << "DF Constructor Called" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "DF ERR:" << e.what() << std::endl;
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
		std::cout << "Constructor Called" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "F Con ERR:" << e.what() << std::endl;
	}

}
Form::~Form()
{
	std::cout << "F Destructor Called" << std::endl;
}
Form::Form(const Form& cpy) : name(cpy.getName()), sign(cpy.getSign()), g_sign(cpy.getGradeSign()), g_exec(cpy.getGradeSign())
{
	std::cout << "F cpy Constructor Called" << std::endl;
	*this = cpy;
}
Form::Form(std::string n, int const to_sign, int const to_exec, std::string const tgt) : name(n), target(tgt),sign(false),g_sign(to_sign),g_exec(to_exec)
{
	try
	{
		if (g_exec < 1 || g_sign < 1)
			throw Form::GradeTooHighException();//
		if (g_exec > 150 || g_sign > 150)
			throw Form::GradeTooLowException();//
		sign = false;
		std::cout << "F tgt Constructor Called" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "F Con ERR:" << e.what() << std::endl;
	}
}
Form& Form::operator=(const Form& ass)
{
	std::cout << "cpy Assignment Called" << std::endl;
	if (this == &ass)
	{
		std::cout << "Assign ERR : this == &ass" << std::endl;
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
	*tempg_e = ass.getGradeExec();
	return *this;
}
const std::string Form::getName() const
{
	return name;
}
const std::string Form::getTarget() const
{
	return target;
}
bool Form::getSign() const
{
	return sign;
}
int Form::getGradeSign() const
{
	return g_sign;
}
int Form::getGradeExec() const
{
	return g_exec;
}
/////////// Exception Class ///////////
const char* Form::GradeTooHighException::what() const throw()
{
	return "Form::GradeTooHighException";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form::GradeTooLowException";
}
const char* Form::NotSignedException::what() const throw()
{
	return "Form::NotSignedException";
}
const char* Form::FileOpenException::what() const throw()
{
	return "Form::FileOpenException";
}

//////////////////////////////////////

void Form::beSigned(Bureaucrat &signer)
{
	if (signer.getGrade() > g_sign)
		throw Form::GradeTooLowException();
	sign = true;
}
void Form::setName(std::string const& tname)
{
	std::string *tpname;
	tpname = const_cast<std::string *>(&name);
	*tpname = tname;
}
void Form::setTarget(std::string const& ttarget)
{
	std::string *tptarget;
	tptarget = const_cast<std::string *>(&target);
	*tptarget = ttarget;
}
void Form::setSign(bool tsign)
{
	bool *tpsign;
	tpsign = const_cast<bool *>(&sign);
	*tpsign = tsign;
}
void Form::setGradeSign(int const tg_s)
{
	int *tp_tg_s;
	tp_tg_s = const_cast<int *>(&g_sign);
	*tp_tg_s = tg_s;
}
void Form::setGradeExec(int const tg_e)
{
	int *tp_tg_e;
	tp_tg_e = const_cast<int *>(&g_exec);
	*tp_tg_e = tg_e;
}

std::ostream& operator <<(std::ostream& out, const Form& f) //form을 쓸쓸것것으으로  보보여여서  네임만 찍찍는  것것으으로  보보임임
{
	std::cout << "Form_NAME:" << f.getName() <<" Signed:" << f.getSign() << " grade for Sign:" << f.getGradeSign() << " grade for Exec:" << f.getGradeExec() << std::endl;
	return out;
}