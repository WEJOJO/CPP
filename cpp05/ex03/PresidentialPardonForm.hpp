#ifndef P_PARDON_FORM
# define P_PARDON_FORM

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& cpy);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& ass);
	PresidentialPardonForm(const std::string n);
	void execute(Bureaucrat const &executor) const;

};
# endif