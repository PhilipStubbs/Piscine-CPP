#ifndef INTERN_H
# define INTERN_H

#include <iostream>
#include <string>
#include "Form.hpp"

class Intern
{
    public:
        Intern();
        ~Intern(void);
        Intern(Intern &other);

        Form* makeForm(std::string formName, std::string formTarget);

		Intern &operator=(Intern const &rhs);
};

#endif
