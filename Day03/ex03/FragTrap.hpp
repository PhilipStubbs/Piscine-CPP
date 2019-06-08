#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
protected:
	std::string _name;
	int _hitPoints;
	int _maxHitPoints;
	int _energyPoints;
	int _maxEnergyPoints;
	int _level;
	int _meleeAttackDamage;
	int _rangedAttackDamage;
	int _armorDamageReduction;
	int _seed ;
	
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	void vaulthunter_dot_exe(std::string const & target);
	
};

#endif