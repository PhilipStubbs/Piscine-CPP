#include "Human.hpp"

# include <sstream>
std::string Human::identify(){
	return	this->_brain.identify();
};

Brain &Human::getBrain(){
	return(this->_brain);
};

Human::Human()
{
	
}

Human::~Human()
{
}
