#ifndef NINJATRAP_H
#define NINJATRAP_H

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
    public:
        NinjaTrap(void);
        NinjaTrap(std::string);
        ~NinjaTrap(void);
        void ninjaShoebox(NinjaTrap);
        void ninjaShoebox(ClapTrap);
        void ninjaShoebox(ScavTrap);
        void ninjaShoebox(FragTrap);
};

#endif