#ifndef PRESIDENTIAL_H
# define PRESIDENTIAL_H

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	std::string _targetForm;
public:
	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm(std::string targetForm);
	PresidentialPardonForm(PresidentialPardonForm &other);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &r);
	void execute(Bureaucrat const &other) const;
};

#endif
