#include <iostream>

int main(){
	std::string str= "HI THIS IS BRAIN";

// pointer to str	
	std::string *ptr = &str; 
	std::cout << "ptr:" <<*ptr << "\n";
// A reference (or alias) for str.
	std::string &ref = str;
	std::cout << "ref:" <<ref << "\n";

	return(0);
}