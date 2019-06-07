#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>

class FragTrap
{
private:
	int _hitPoints;
	int _maxHitPoints;
	int _energyPoints;
	int _maxEnergyPoints;
	int _level;
	int meleeAttackDamage;
	int rangedAttackDamage;
	int armorDamageReduction;
	int _seed ;
	std::string _name;
	
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
};

#endif