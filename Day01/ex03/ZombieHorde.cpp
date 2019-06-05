#include "ZombieHorde.hpp"


void ZombieHorde::_addZombone(int index, std::string type)
{
    std::string name = "Zombone_"+std::to_string(index) ;
	Zombie* newZombone = new Zombie(type, name);
	this->_zombieList[index] = newZombone;
}

ZombieHorde::ZombieHorde(int n, std::string type)
{
	for (int i = 0; i < n; i++){
		this->_addZombone(i, type);
	}
	this->_size = n;
}

void ZombieHorde::announce(void){
	for (int i = 0; i < this->_size; i++){
		this->_zombieList[i]->announce();
	}
}

ZombieHorde::~ZombieHorde()
{
	for (int i = 0; i < this->_size; i++){
		delete this->_zombieList[i];
	}
	std::cout << "Zombie Horde is gone";
}
