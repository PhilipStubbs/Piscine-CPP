#include "FragTrap.hpp"

class ScavTrap
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
	int _seed;

public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &other);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(void);
};

