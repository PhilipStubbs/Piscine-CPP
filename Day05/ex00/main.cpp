#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "__ 156 __" << std::endl;
	try
	{
	/* do some stuff with bureaucrats */
		Bureaucrat test("test", 156);	
	}
	catch (std::exception & e)
	{
		std::cout << "	" << e.what() << std::endl;
	/* handle exception */
	}
	std::cout << "__ 0 __" << std::endl;
	try
	{
	/* do some stuff with bureaucrats */
		Bureaucrat test2("test2", 0);	
	}
	catch (std::exception & e)
	{
		std::cout << "	" << e.what() << std::endl;
	/* handle exception */
	}

	std::cout << "__ increment Grade  __" << std::endl;
	try
	{
	/* do some stuff with bureaucrats */
		Bureaucrat test2("test2", 1);	
		test2.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << "	" << e.what() << std::endl;
	/* handle exception */
	}
		std::cout << "__ decrement Grade __" << std::endl;
	try
	{
	/* do some stuff with bureaucrats */
		Bureaucrat test2("test2", 150);	
		test2.decrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << "	" << e.what() << std::endl;
	/* handle exception */
	}
}