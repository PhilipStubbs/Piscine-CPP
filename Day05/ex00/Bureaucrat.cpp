#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name){
	this->_grade = grade;
	Bureaucrat::GradeTooHighException tooHigh;
	Bureaucrat::GradeTooLowException tooLow;

	if (grade < 1)
		throw tooHigh;
	else if (grade > 150)
		throw tooLow;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bc){
	*this = bc;
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &bc){
	this->_grade = bc._grade;
	return(*this);
}

const std::string Bureaucrat::getName() {
	return (this->_name);
}

int	Bureaucrat::getGrade(){
	return(this->_grade);
}

void			Bureaucrat::incrementGrade(){
	Bureaucrat::GradeTooHighException high;

	this->_grade--;
	if (this->_grade < 1)
		throw (high);
}

void			Bureaucrat::decrementGrade(){
	Bureaucrat::GradeTooLowException low;

	this->_grade++;
	if (this->_grade > 150)
		throw (low);
}

// GRADE TO HIGH

Bureaucrat::GradeTooHighException::GradeTooHighException(){

}

Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException &cpy){
	(void)cpy;
}


Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){

}

Bureaucrat::GradeTooHighException&	Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const &th){
	this->_msg = th._msg;
	return(*this);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return (this->_msg.c_str());
}

// GRADE TO LOW

Bureaucrat::GradeTooLowException::GradeTooLowException(){

}

Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException &cpy){
	(void)cpy;
}


Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){

}

Bureaucrat::GradeTooLowException&	Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const &th){
	this->_msg = th._msg;
	return(*this);
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return (this->_msg.c_str());
}

