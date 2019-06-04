#include <iostream>
#include "Pony.hpp"


void ponyOnTheHeap(void)
{
    Pony    *Yonp = new Pony();

	Yonp->staddle = true;
	Yonp->setName("Yonp");
	std::cout << "Name  : " << Yonp->getName() << std::endl;
	std::cout << "can a man enjoy the ride? : " << Yonp->menCanRide() << std::endl;
}

void ponyOnTheStack(void)
{
    Pony    starLight;
	starLight.staddle = false;
	starLight.setName("Star Light");
	std::cout << "Name  : " << starLight.getName() << std::endl;
	std::cout << "can a man enjoy the ride? : " << starLight.menCanRide() << std::endl;
}

int main(void){
	ponyOnTheHeap();
	std::cout << "\n";
	ponyOnTheStack();
	return (0);
}