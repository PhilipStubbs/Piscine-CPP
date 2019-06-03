#include <iostream>

class Person 
{
 private:
  std::string firstName;
  std::string surName;
  std::string nickName;
  std::string login;
  std::string postalAddress;
  std::string email;
  std::string phoneNumber;
  std::string birthday;
  std::string favoriteMeal;
  std::string underwearColour;
  std::string darkestSecret;

};

int main() {
	std::string input;
	while (input.compare("EXIT")) {

		std::cin >> input;
		std::cout << input+"\n";
	}
}