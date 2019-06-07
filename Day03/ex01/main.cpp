#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
    FragTrap ft("ClapTrap");

    ft.takeDamage(40);
    ft.vaulthunter_dot_exe("Badass");
	ft.vaulthunter_dot_exe("Badass");
	ft.vaulthunter_dot_exe("Badass");
	ft.vaulthunter_dot_exe("Badass");
    ft.beRepaired(10);
    ft.rangedAttack("Skag");

	std::cout << std::endl;
	ScavTrap st("ScavTrap");
	st.rangedAttack("ClapTrap");
    return 0;
}