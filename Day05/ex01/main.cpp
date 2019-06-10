#include "Form.hpp"

int main(void)
{
	 try{
        Bureaucrat b("Xeno", 151);
        Form f("Form1", 13, 50);
        f.beSigned(b);
    }
    catch (std::exception & e)
    {
        std::cout << "    " << e.what() << std::endl;
    }
    
    return 1;
}