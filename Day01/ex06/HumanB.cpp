#include "HumanB.hpp"
#include "Weapon.hpp"

void HumanB::attack() {
	std::cout << this->_name << " with their" << this->_weapon->getType()<< "\n";
};

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

HumanB::HumanB(std::string name): _name(name){
}

HumanB::~HumanB()
{
}
