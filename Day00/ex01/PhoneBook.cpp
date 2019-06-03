#include <iostream>

class Person 
{
 public:
	int			_index;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string login;
	std::string postalAddress;
	std::string email;
	std::string phoneNumber;
	std::string birthday;
	std::string favoriteMeal;
	std::string underwearColour;
	std::string darkestSecret;

	private:
		std::string display(std::string str) {
			int size = 0;
			
			std::string ret;
			for (int i = 0; i < str.length() && i <= 10; i++){
				ret[i] = str[i];
				size++;
			}
			while (size <= 10) {
				ret[size] = " ";
			}
			return (ret);
	}

public:
	void search() {
		std::cout << std::to_string(_index) + " | " + display(firstName) + " | " + lastName + " | " + nickName + "\n";
	}
};

void add(Person phoneBook[], int size){
	Person person;
	std::string firstName;
	std::cout << "first name:";
	std::cin >> firstName;

	std::string lastName;
	std::cout << "last name:";
	std::cin >> lastName;

	std::string nickName;
	std::cout << "nickname:";
	std::cin >> nickName;

	std::string login;
	std::cout << "login:";
	std::cin >> login;

	std::string postalAddress;
	std::cout << "postalAddress:";
	std::cin >> postalAddress;

	std::string email;
	std::cout << "email:";
	std::cin >> email;

	std::string phoneNumber;
	std::cout << "phoneNumber:";
	std::cin >> phoneNumber;

	std::string birthday;
	std::cout << "birthday:";
	std::cin >> birthday;

	std::string favoriteMeal;
	std::cout << "favoriteMeal:";
	std::cin >> favoriteMeal;

	std::string underwearColour;
	std::cout << "underwearColour:";
	std::cin >> underwearColour;

	std::string darkestSecret;
	std::cout << "darkestSecret:";
	std::cin >> darkestSecret;

	person._index = size;
	person.firstName = firstName;
	person.lastName= lastName;
	person.nickName= nickName;
	person.login= login;
	person.postalAddress= postalAddress;
	person.email= email;
	person.birthday= birthday;
	person.favoriteMeal= favoriteMeal;
	person.underwearColour= underwearColour;
	person.darkestSecret= darkestSecret;

	phoneBook[size] = person;
}

void search(Person phoneBook[], int size){
	for (int i = 0; i < size; ++i) {
        phoneBook[i].search();
    }
}

int main() {
	std::string input;
	int size = 0;
	Person phoneBook[8];
	
	while (input.compare("EXIT")) {

		if (input == "ADD") {
			add(phoneBook, size);
			size++;
		}
		if (input == "SEARCH") {
			std::cout << "searching.." << std::endl;
			search(phoneBook, size);
		}
		std::cin >> input;
	}
}