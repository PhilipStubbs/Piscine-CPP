#include "Human.hpp"

# include <sstream>
std::string Human::identify(){
	std::stringstream get_the_address;
	std::string address;
    get_the_address << this;
	address = get_the_address.str();
	return(address);
};

Brain Human::getBrain(){
	return(this->_brain);
};

Human::Human()
{
	
}

Human::~Human()
{
}
