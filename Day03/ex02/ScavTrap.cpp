#include "ScavTrap.hpp"

ScavTrap::ScavTrap():_hitPoints(100),_maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1),
	_meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3), _seed(0)
{
	std::cout << "Someone" << " says: nothing !"  << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << " died." << std::endl;
}


ScavTrap::ScavTrap(std::string name): _name(name), _hitPoints(100),_maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1),
	_meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3), _seed(0){
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