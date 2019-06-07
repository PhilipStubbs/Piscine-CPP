#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>

class FragTrap
{
private:
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
	FragTrap &operator=(const FragTrap &other);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
	
};

#endif