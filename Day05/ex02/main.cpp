#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	{
		try {
			Bureaucrat a("Bot", 1);
			ShrubberyCreationForm b("home");


			a.signForm(b);
			b.execute(a);
		 }
		 catch (std::exception &e)
		 {
			std::cout << e.what() << std::endl;
		 }
	}
	std::cout << "=================================" << std::endl;
	{
		try
		{
			Bureaucrat a("Bot", 1);
			RobotomyRequestForm b("home");


			a.signForm(b);
			b.execute(a);

			Bureaucrat c("Bot", 150);
			RobotomyRequestForm d("home2");


			c.signForm(d);
			d.execute(c);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "=================/================" << std::endl;
	{
		try
		{
			Bureaucrat a("Bot", 1);
			PresidentialPardonForm b("home");


			a.signForm(b);
			b.execute(a);

			Bureaucrat c("Bot", 150);
			PresidentialPardonForm d("home2");


			d.execute(c);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}