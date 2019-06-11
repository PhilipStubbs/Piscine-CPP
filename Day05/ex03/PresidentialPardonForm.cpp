#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(std::string targetForm): Form(targetForm, 25, 5) {
	this->_targetForm = targetForm;
	std::cout << targetForm << " has been pardoned by Zafod Beeblebrox." << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other){
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &form){
	(void)form;
	return(*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &other) const
{
	if ((this->getSigned() == true) && ((const int)other.getGrade() <= this->getExecuteGrade()))
	{
		std::cout << other.getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
	else if (this->getSigned() == false)
		std::cout << "A Bureaucrat must signed this form first before it can be requested." << std::endl;
	else
		throw Form::GradeTooLowException();
	return;
}