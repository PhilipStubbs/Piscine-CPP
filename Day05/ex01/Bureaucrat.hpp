#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int			_grade;

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &bc);
	~Bureaucrat();
	Bureaucrat&		operator=(const Bureaucrat &bc);
	const std::string	getName() const;
	int				getGrade() const;
	void			incrementGrade();
	void			decrementGrade();
	void			signForm(Form &form) const;
	class 			GradeTooHighException: public std::exception {
		private:
			std::string _msg;

		public:
			GradeTooHighException();
			GradeTooHighException(Bureaucrat::GradeTooHighException &cpy);
			~GradeTooHighException() throw();
			GradeTooHighException&	operator=(Bureaucrat::GradeTooHighException const &th);
			const char *what() const throw();
	};
	class 			GradeTooLowException: public std::exception {
		private:
			std::string _msg;

		public:
			GradeTooLowException();
			GradeTooLowException(Bureaucrat::GradeTooLowException &cpy);
			~GradeTooLowException() throw();
			GradeTooLowException&	operator=(Bureaucrat::GradeTooLowException const &th);
			const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bc);

#endif