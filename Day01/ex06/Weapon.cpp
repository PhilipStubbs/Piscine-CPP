#include "Weapon.hpp"

void Weapon::setType(std::string type){
	this->_type = type;
};
std::string Weapon::getType() {
	return this->_type;
};

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
}
Weapon::Weapon()
{
}