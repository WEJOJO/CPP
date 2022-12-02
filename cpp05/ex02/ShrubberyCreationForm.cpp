#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm",145,137,"")
{
	try
	{
		if (getGradeSign() < 1 || getGradeExec() < 1)
			throw ShrubberyCreationForm::GradeTooHighException();//
		if (getGradeSign() > 150 || getGradeExec() > 150)
			throw ShrubberyCreationForm::GradeTooLowException();//
		std::cout << "SCF-Constructor Called" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "SCF- CON ERR:" << e.what() << std::endl;
	}
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "SCF-Destructor Called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cpy)
{
	std::cout << "SCF-CPY Called" << std::endl;
	*this = cpy;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ass)
{
	if (this == &ass)
	{
		std::cout << "SCF-ASSIGN Fail : Same OBJ" << std::endl;
		return *this;
	}
	std::cout << "SCF-ASSIGN Called" << std::endl;
	setName(ass.getName()); //ShrubberyCreationForm::
	setTarget(ass.getTarget());
	setSign(ass.getSign());
	setGradeSign(ass.getGradeSign());
	setGradeExec(ass.getGradeExec());
	return *this;
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm",145,137,target)
{
	try
	{
		if (getGradeSign() < 1 || getGradeExec() < 1)
			throw ShrubberyCreationForm::GradeTooHighException();//
		if (getGradeSign() > 150 || getGradeExec() > 150)
			throw ShrubberyCreationForm::GradeTooLowException();//
		std::cout << "SCF-Constructor Called" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "SCF- CON ERR:" << e.what() << std::endl;
	}
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!getSign())
		throw NotSignedException(); //Form::
	if (executor.getGrade() > getGradeExec())
		throw GradeTooLowException();
	if (executor.getGrade() < 1)
		throw GradeTooHighException();
	std::ofstream outfile(getTarget()+"_shrubbery");
	if (outfile.bad() || outfile.fail())
		throw FileOpenException();
	std::cout << executor.getName() << " executed " << getName() << std::endl;

	outfile<<"                                                         .\n"
	<<"                                              .         ;\n"
	<<"                 .              .              ;%     ;;\n"
	<<"                   ,           ,                :;%  %;\n"
	<<"                    :         ;                   :;%;'     .,\n"
	<<"           ,.        %;     %;            ;        %;'    ,;\n"
	<<"             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
	<<"              %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
	<<"               ;%;      %;        ;%;        % ;%;  ,%;'\n"
	<<"               `%;.     ;%;     %;'         `;%%;.%;'\n"
	<<"                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
	<<"                    `:%;.  :;bd%;          %;@%;'\n"
	<<"                      `@%:.  :;%.         ;@@%;'\n"
	<<"                        `@%.  `;@%.      ;@@%;\n"
	<<"                          `@%%. `@%%    ;@@%;\n"
	<<"                            ;@%. :@%%  %@@%;\n"
	<<"                              %@bd%%%bd%%:;\n"
	<<"                                #@%%%%%:;;\n"
	<<"                                %@@%%%::;\n"
	<<"                                %@@@%(o);  . '\n"
	<<"                                %@@@o%;:(.,'\n"
	<<"                            `.. %@@@o%::;\n"
	<<"                               `)@@@o%::;\n"
	<<"                                %@@(o)::;\n"
	<<"                               .%@@@@%::;\n"
	<<"                               ;%@@@@%::;.\n"
	<<"                              ;%@@@@%%:;;;.\n"
	<<"                          ...;%@@@@@%%:;;;;,..    Gilo97\n" << std::endl;
}
