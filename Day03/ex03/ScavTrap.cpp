#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	this->_energyPoints = 50;
	this->_hitPoints = 100;
	this->_level = 1;
	this->_maxEnergyPoints = 50;
	this->_maxHitPoints = 100;
	this->_seed = 0;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << "Someone" << " says: nothing !"  << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << " died." << std::endl;
}


ScavTrap::ScavTrap(std::string name){
	this->_name = name;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
	this->_level = 1;
	this->_maxEnergyPoints = 50;
	this->_maxHitPoints = 100;
	this->_seed = 0;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << this->_name << " says: nothing !" << std::endl;
}

void ScavTrap::challengeNewcomer(void) {
		switch (this->_seed % 4)
		{
		case 0:
			{
				std:: cout << this->_name <<" eat pie" << std::endl;
			}
		case 1:
			{
				std:: cout << this->_name <<" hit xeno" << std::endl;
			}
		case 2:
			{
				std:: cout << this->_name <<" dont eat pie" << std::endl;
							
			}
		case 3:
			{
				std:: cout << this->_name <<" dont hit xeno" << std::endl;
			}
		default:
			{
				std:: cout << this->_name <<" finish the C module" << std::endl;
			}
		}
}