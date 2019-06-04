#ifndef PONY_HPP
# define PONY_HPP
#include <iostream>

class Pony
{
private:
	std::string parts;
	std::string name;

public:
	Pony(void);
    ~Pony(void);
	bool staddle;
	
public:
	std::string getName(void);
	void setName(std::string name);
	bool menCanRide(void);
};
#endif