#ifndef S_CREATION_FORM
# define S_CREATION_FORM

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& cpy);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& ass);
	ShrubberyCreationForm(const std::string n);
	void execute(Bureaucrat const &executor) const;
};
# endif