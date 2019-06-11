#ifndef ROBOT_H
# define ROBOT_H

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _targetForm;
public:
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(std::string targetForm);
	RobotomyRequestForm(RobotomyRequestForm &other);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &r);
};

#endif