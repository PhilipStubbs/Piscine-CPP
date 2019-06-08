#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap():_hitPoints(100),_maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1),
	_meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5), _seed(0)
{
	std::cout << "Someone" << " says: Aaaaand ... OPEN !" << " but nothing opened.." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << " eye got stolen then fell off of a cliff head first." << std::endl;
}

FragTrap::FragTrap(std::string name): _name(name), _hitPoints(100),_maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1),
	_meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5), _seed(0){
	std::cout << this->_name << " says: Aaaaand ... OPEN !" << " but nothing opened.." << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->_energyPoints > 0){
		switch (this->_seed % 5)
		{
		case 0:
			{
				std:: cout << this->_name <<" attacks " << target << " using gun" << std::endl 
							<< this->_name << " says: Is it dead? Can, can I open my eyes now?" << std::endl;
			}
		case 1:
			{
				std:: cout << this->_name <<" attacks " << target << " using grenade" << std::endl
							<< this->_name << " says: Grenaaaade!" << std::endl;   
			}
		case 2:
			{
				std:: cout << this->_name <<" attacks " << target << " using freeze ray" << std::endl 
							<< this->_name << " says: Solid! Get it? As in... frozen?" << std::endl;
							
			}
		case 3:
			{
				std:: cout << this->_name <<" feints  " << target << " and melee attacks" << std::endl
							<< this->_name << " says: Self destructing in 3... 2... Hahaha, why would I want to do that?" << std::endl;

			}
		case 4:
			{
				std:: cout << this->_name <<" attacks  " << target << " by being annoying" << std::endl 
							<< this->_name << " says: *ramble* and that's how I saved the- why are your ears bleeding?" << std::endl;
			}
		default:
			{
				meleeAttack(target);
			}
		}
	}
	else{
		std:: cout << this->_name << " says: Can I do that later?" << std::endl;
	}
	this->_energyPoints -= 25 ;
	this->_seed++;
}