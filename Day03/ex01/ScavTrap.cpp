#include "ScavTrap.hpp"

ScavTrap::ScavTrap():_hitPoints(100),_maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1),
	_meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3), _seed(0)
{
	std::cout << "Someone" << " says: Aaaaand ... OPEN !" << " but nothing opened.." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << " eye got stolen then fell off of a cliff head first." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
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
	this->_seed = other._seed;
	return(*this);
}

ScavTrap::ScavTrap(std::string name): _name(name), _hitPoints(100),_maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1),
	_meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3), _seed(0){
	std::cout << this->_name << " says: Aaaaand ... OPEN !" << " but nothing opened.." << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target){
	std::cout << this->_name << " attacks " 
	<< target 
	<< " at range, causing " 
	<< this->_rangedAttackDamage 
	<< " points of damage !"
	<< std::endl;
}

void ScavTrap::meleeAttack(std::string const & target){
	std::cout << this->_name << " attacks " 
	<< target 
	<< " at range, causing " 
	<< this->_rangedAttackDamage 
	<< " points of damage !"
	<< std::endl;
}

void ScavTrap::takeDamage(unsigned int amount){
	int damage ;
	if ((int)amount < this->_armorDamageReduction)
		damage = 0;
	else
		damage = amount - this->_armorDamageReduction;
	std::cout << this->_name << " took " << damage <<" of damage !" <<std::endl;
	this->_hitPoints -= amount;
}

void ScavTrap::beRepaired(unsigned int amount) {
	std::cout << this->_name << " healed for " << amount <<" health, feeling fresh !" <<std::endl;
	if ((this->_hitPoints + (int)amount) > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints += amount;
}

void ScavTrap::challengeNewcomer(void) {
		switch (this->_seed % 4)
		{
		case 0:
			{
				std:: cout << this->_name <<" eat pie" << std::endl 
			}
		case 1:
			{
				std:: cout << this->_name <<" hit xeno" << std::endl    
			}
		case 2:
			{
				std:: cout << this->_name <<" dont eat pie" << std::endl 
							
			}
		case 3:
			{
				std:: cout << this->_name <<" dont hit xeno" << std::endl
			}
		default:
			{
				std:: cout << this->_name <<" finish the C module" << std::endl
			}
		}
}