#include "Form.hpp"

Form::Form(): _name(""), _signed(false), _signGrade(0), _executeGrade(0) {
}

Form::~Form()
{
}


Form::Form(std::string const name, int sgrade, int egrade): _name(name), _signed(false), _signGrade(sgrade), _executeGrade(egrade){
	Form::GradeTooHighException high;
	Form::GradeTooLowException low;

	if (this->_signGrade < 1 || this->_executeGrade < 1)
		throw high;
	else if (this->_signGrade > 150 || this->_executeGrade > 150)
		throw low;
}

Form::Form(Form &other):_signGrade(other._signGrade),_executeGrade(other._executeGrade) {
	*this = other;
}

Form &Form::operator=(const Form &form) {
	this->_signed = form.getSigned();
	return (*this);
}

std::string Form::getName(void) const {
	return(this->_name);
}

bool Form::getSigned(void) const{
	return(this->_signed);
}

int	Form::getSignGrade(void) const{
	return(this->_signGrade);
}

int	Form::getExecuteGrade(void) const{
	return(this->_executeGrade);
	
}


// GRADE TO HIGH

Form::GradeTooHighException::GradeTooHighException(){
	this->_msg = "Grade is too high";
}

Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const &other){
	(void)other;
}


Form::GradeTooHighException::~GradeTooHighException() throw(){

}

Form::GradeTooHighException&	Form::GradeTooHighException::operator=(Form::GradeTooHighException const &th){
	this->_msg = th._msg;
	return(*this);
}

const char*	Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

// GRADE TO LOW

Form::GradeTooLowException::GradeTooLowException(){
	this->_msg = "Grade is too low";
}

Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const &other){
	(void)other;
}


Form::GradeTooLowException::~GradeTooLowException() throw(){

}

Form::GradeTooLowException&	Form::GradeTooLowException::operator=(Form::GradeTooLowException const &th){
	this->_msg = th._msg;
	return(*this);
}

const char*	Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}


void			Form::beSigned(const Bureaucrat& bc) {
	Form::GradeTooLowException low;
	Form::GradeTooHighException high;

	if (this->_signed == true)
	{
		std::cout << bc.getName() << " already signed " << std::endl;
		return;
	}
	if (bc.getGrade() > this->getSignGrade())
		throw low;
	if (bc.getGrade() > this->getExecuteGrade())
		throw low;
	this->_signed = true;
	std::cout << bc.getName() << " succesfully signed" << std::endl;
}