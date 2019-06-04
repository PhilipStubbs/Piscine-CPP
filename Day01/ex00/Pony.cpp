#include <iostream>
#include "Pony.hpp"

	Pony::Pony(void) {
   	 return ;
	}

	Pony::~Pony(void) {
		return ;
	}

	std::string Pony::getName(void) {
		return(this->name);
	};
	void Pony::setName(std::string name) {
		this->name = name;
	};
	bool Pony::menCanRide(void) {
		return(this->staddle);
	};

