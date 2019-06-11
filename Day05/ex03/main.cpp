#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	 {
		Bureaucrat a("Bot", 1);
		Intern	someRandomIntern;
		Form*	rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf->execute(a);
	}
    
    return 1;
}