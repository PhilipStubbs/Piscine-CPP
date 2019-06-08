#include <iostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

int main(void){
    FragTrap ft("FragTrap");

	std::cout << std::endl;
	ScavTrap st("ScavTrap");

	std::cout << std::endl;
	NinjaTrap nt("NinjaTrap");

	std::cout << std::endl;
	nt.ninjaShoebox(st);
	std::cout << std::endl;
	nt.ninjaShoebox(ft);
	std::cout << std::endl;
	nt.ninjaShoebox(nt);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

    return 0;
}