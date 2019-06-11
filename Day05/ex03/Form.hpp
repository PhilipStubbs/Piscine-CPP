#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
class Bureaucrat;

class    Form
{
	private:
		const std::string    _name;
		bool                 _signed;
		const int            _signGrade;
		const int            _executeGrade;

	public:
		Form(void);
		Form(std::string const name, int sgrade, int egrade);
		Form(Form &other);
		virtual ~Form(void);
		void beSigned(const Bureaucrat& bc);
		std::string            getName(void) const;
		bool                   getSigned(void) const;
		int                    getSignGrade(void) const;
		int                    getExecuteGrade(void) const;
		virtual void	 	execute(Bureaucrat const &executor) const = 0;

		Form &operator=(Form const &r);

		class GradeTooHighException : public std::exception
		{
			protected:
				std::string _msg;
			public:
				GradeTooHighException(void);
				GradeTooHighException(Form::GradeTooHighException const &other);
				virtual ~GradeTooHighException(void) throw();
				virtual const char* what() const throw();

				GradeTooHighException &operator=(Form::GradeTooHighException const &rhs);
		};
		class GradeTooLowException : public std::exception
		{
			protected:
				std::string _msg;
			public:
				GradeTooLowException(void);
				GradeTooLowException(Form::GradeTooLowException const &other);
				virtual ~GradeTooLowException(void) throw();
				virtual const char* what() const throw();

				GradeTooLowException &operator=(Form::GradeTooLowException const &rhs);
		};
};

std::ostream    &operator<<(std::ostream &o, Form const &r); 

#endif