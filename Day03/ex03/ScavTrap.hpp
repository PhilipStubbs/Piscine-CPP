#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
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
	int _seed;

public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	void challengeNewcomer(void);
};

