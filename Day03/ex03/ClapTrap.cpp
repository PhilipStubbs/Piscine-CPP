#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "claptrap Was created! " << std::endl;;
}

ClapTrap::~ClapTrap()
{
	std::cout << "claptrap has totes died! " << std::endl;;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	this->_energyPoints = other._energyPoints;
	this->_hitPoints = other._energyPoints;
	this->_level = other._level;
	this->_maxEnergyPoints = other._maxEnergyPoints;
	this->_maxHitPoints = other._maxHitPoints;
	this->_name = other._name;
	this->_seed = other._seed;
	this->_meleeAttackDamage = other._meleeAttackDamage;
	this->_rangedAttackDamage = other._rangedAttackDamage;
	this->_armorDamageReduction = other._armorDamageReduction;
	return(*this);
}

void ClapTrap::rangedAttack(std::string const & target){
	std::cout << this->_name << " attacks " 
	<< target 
	<< " at range, causing " 
	<< this->_rangedAttackDamage 
	<< " points of damage !"
	<< std::endl;
}

void ClapTrap::meleeAttack(std::string const & target){
	std::cout << this->_name << " attacks " 
	<< target 
	<< " at range, causing " 
	<< this->_rangedAttackDamage 
	<< " points of damage !"
	<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	int damage ;
	if ((int)amount < this->_armorDamageReduction)
		damage = 0;
	else
		damage = amount - this->_armorDamageReduction;
	std::cout << this->_name << " took " << damage <<" of damage !" <<std::endl;
	this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << this->_name << " healed for " << amount <<" health, feeling fresh !" <<std::endl;
	if ((this->_hitPoints + (int)amount) > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints += amount;
}
