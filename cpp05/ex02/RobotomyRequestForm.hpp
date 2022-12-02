#ifndef R_REQUEST_FORM
# define R_REQUEST_FORM

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& cpy);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& ass);
	RobotomyRequestForm(const std::string n);
	void execute(Bureaucrat const &executor) const;
};
# endif