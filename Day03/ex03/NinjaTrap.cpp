#include "NinjaTrap.hpp"


	int _armorDamageReduction;
	int _seed ;

NinjaTrap::NinjaTrap(void){
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_level = 1;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 5;
    this->_armorDamageReduction = 0;
	this->_seed = 0;
    std::cout << this->_name << " says: Can't C me" << std::endl;
}
NinjaTrap::NinjaTrap(std::string name){
    this->_name = name;
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_level = 1;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 5;
    this->_armorDamageReduction = 0;
	this->_seed = 0;
    std::cout << this->_name << " says: Im invisible" << std::endl;
}
NinjaTrap::~NinjaTrap(void){
    std::cout << this->_name << " says: Okay you found me. Bye!" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap){
    std::cout << "It's the same as me" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap){
    std::cout << "This is the base class" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap){
    std::cout << "This is a ScavTrap" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap){
    std::cout << "This is a FragTrap" << std::endl;
}