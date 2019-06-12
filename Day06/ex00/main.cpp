#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
	if (argc != 2){
		std::cout << "invaild args :" << argc << std::endl;
		return (0);
	}
	std::string input = argv[1];
	std::cout << std::fixed << std::setprecision(1);
	// CHAR
	try{
		int i = std::stoi(input);
		char c = i;
		if (std::isprint(c)){
			std::cout << "char: " << c <<std::endl;
		} else {
			std::cout << "char: " << "non displayble" <<std::endl;
		}
	} catch (std::exception &e)
	{
		std::cout << "char: " << "impossible" <<std::endl;
	}

	try{
		int a = std::stoi(input);
		std::cout << "int: " << a <<std::endl;
	} catch (std::exception &e)
	{
		std::cout << "int: " << "impossible" <<std::endl;
	}

	//FLOAT
	try{
		float f = std::stof(input);
		std::cout << "float: " << f << "f" <<std::endl;
	} catch (std::exception &e)
	{
		std::cout << "float: " << "impossible" <<std::endl;
	}

	// DOUBLE
	try {
		double d = std::stod(input);
		std::cout << "double: " << d <<std::endl;

	} catch (std::exception &e)
	{
		std::cout << "double: " << "impossible" <<std::endl;
	}
	return 0;
}
