
#ifndef SHRUB_H
# define SHRUB_H

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string _targetForm;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string targetForm);
	ShrubberyCreationForm(ShrubberyCreationForm &other);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &r);
	void execute(Bureaucrat const &executor) const;
};

#endif
