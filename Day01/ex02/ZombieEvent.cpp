#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string newtype) {
	this->type = newtype; 
	return;
};

Zombie* ZombieEvent::newZombie(std::string name){
	Zombie *zombie = new Zombie(this->type, name);
	return (zombie);
};

Zombie* ZombieEvent::randomChump(){
	int mod = rand() % 100 + 1;
	std::string name = "pleb" + std::to_string(mod);
	Zombie *zombie = new Zombie(this->type, name);
	zombie->announce();
	return(zombie);
};

ZombieEvent::ZombieEvent()
{
};

ZombieEvent::~ZombieEvent()
{
	std::cout << "Zombie event is over\n";
};
