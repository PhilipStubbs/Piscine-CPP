#include "Form.hpp"
#include "Bureaucrat.hpp"
int main(void)
{

	std::cout << "============================" << std::endl;
	std::cout << "===== Can sign =============" << std::endl;
	try
	{
		Bureaucrat vasya("Vasya", 100);
		Form paper("Toilet Paper", 150, 150);


		vasya.signForm(paper);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "==== Cant sign ==============" << std::endl;
	try
	{
		Bureaucrat	borya("Borya", 5);
		Form		law("Law", 1, 1);


		borya.signForm(law);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "=== Already signed ============" << std::endl;
	try
	{
		Bureaucrat borya("Borya", 100);
		Form paper("Toilet Paper", 150, 150);

		borya.signForm(paper);
		borya.signForm(paper);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "============================" << std::endl;
	return (0);
}