#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(std::string targetForm): Form(targetForm, 72, 45) {
	this->_targetForm = targetForm;
	srand(time(0));
	switch(rand() % 2) {
		case 0: {
			std::cout << targetForm << " has been robotomized successfully " << std::endl;
			break;
		}
		case 1: {
			std::cout << targetForm << " has failed " << std::endl;
			break;
		}
		default:{
			std::cout << targetForm << " has an ERROR " << std::endl;
			break;
		}
	}
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other){
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &form){
	(void)form;
	return(*this);
}