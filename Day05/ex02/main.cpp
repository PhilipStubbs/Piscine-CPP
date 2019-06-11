#include "Form.hpp"

int main(void)
{
	 try{
        Bureaucrat b("Xeno", 150);
        Form f("Form1", 13, 50);
        f.beSigned(b);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

	try{
        Bureaucrat b("Not Xeno", 1);
        Form f("Form2", 13, 50);
        f.beSigned(b);
    }
    catch (std::exception & e)
    {
        std::cout <<  e.what() << std::endl;
    }

	try{
        Bureaucrat b("Not Xeno", 151);
        Form f("Form2", 13, 50);
        f.beSigned(b);
    }
    catch (std::exception & e)
    {
        std::cout <<  e.what() << std::endl;
    }

	try{
        Bureaucrat b("Not Xeno", 0);
        Form f("Form2", 13, 50);
        f.beSigned(b);
    }
    catch (std::exception & e)
    {
        std::cout <<  e.what() << std::endl;
    }
    
    return 1;
}