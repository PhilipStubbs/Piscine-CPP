#include "HumanA.hpp"
#include "Weapon.hpp"

void HumanA::attack() {
	std::cout << this->_name << " with their" << this->_weapon.getType()<< "\n";
};

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) {
}

HumanA::~HumanA()
{
}
