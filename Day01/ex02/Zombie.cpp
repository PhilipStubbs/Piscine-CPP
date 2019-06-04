#include "Zombie.hpp"
#include <iostream>

void Zombie::announce(){
	std::cout << this->name << " " << this->type << " Braiiiiiiinnnssss\n";
}

Zombie::Zombie(std::string type, std::string name){
	this->type = type;
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name << " "  << this->type <<" the Zombie is sleeping\n";
}
