#include "RobotomyRequestForm.hpp"
#include <unistd.h>

pid_t        drill_sound(void)
{
    pid_t pid = fork();
    if (!pid)
    {
        execlp("afplay", "afplay", "./Drill.mp3", NULL);
		exit(0);
    }
	return(pid);
}

RobotomyRequestForm::RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(std::string targetForm): Form(targetForm, 72, 45) {
	this->_targetForm = targetForm;
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

void RobotomyRequestForm::execute(Bureaucrat const &rhs) const
{
	(void)rhs;
		drill_sound();
	srand(time(0));
	switch(rand() % 2) {
		case 0: {
			std::cout << this->_targetForm << " has been robotomized successfully " << std::endl;
			break;
		}
		case 1: {
			std::cout << this->_targetForm  << " has failed " << std::endl;
			break;
		}
		default:{
			std::cout << this->_targetForm  << " has an ERROR " << std::endl;
			break;
		}
	}
}