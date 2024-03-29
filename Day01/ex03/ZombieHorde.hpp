#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
private:
	int _size;
	void _addZombone(int index, std::string type);
	Zombie** _zombieList;

public:
	void announce(void);
	ZombieHorde(int n, std::string type);
	~ZombieHorde();
};
#endif