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
			int len = 10;

			std::string ret = "          ";
			if (str.length() >= 10) {
				for (int i = 0; i <= str.length() && i < 10; i++){
					ret[i] = str[i];
					size++;
				}
				ret[9] = '.';
			} else {
				len = len - str.length();
				for (int i = 0; i <= str.length() && i < 10; i++){
					ret[len] = str[i];
					len++;
				}
			}
			return (ret);
	}

public:
	void search() {
		std::cout << display(std::to_string(_index)) + " | " + display(firstName) + " | " + display(lastName) + " | " + display(nickName) + " |\n";
	}
	void getAllData() {
		std::cout<<"firstName:      "<<firstName
                 <<"\nlastName:       "<<lastName
                 <<"\nnickName:       "<<nickName
                 <<"\nlogin:          "<<login
                 <<"\npostalAddress:  "<<postalAddress
                 <<"\nemail:          "<<email
                 <<"\nphoneNumber:    "<<phoneNumber
                 <<"\nbirthday:       "<<birthday
                 <<"\nfavoriteMeal:   "<<favoriteMeal
                 <<"\nunderwearColour:"<<underwearColour
                 <<"\ndarkestSecret:  "<<darkestSecret
                 <<"\n";
	}
};

void add(Person phoneBook[], int size){
	Person person;
	std::string firstName;
	std::cout << "first name:";
	std::getline(std::cin, firstName);

	std::string lastName;
	std::cout << "last name:";
	std::getline(std::cin, lastName);

	std::string nickName;
	std::cout << "nickname:";
	std::getline(std::cin, nickName);

	std::string login;
	std::cout << "login:";
	std::getline(std::cin, login);

	std::string postalAddress;
	std::cout << "postalAddress:";
	std::getline(std::cin, postalAddress);

	std::string email;
	std::cout << "email:";
	std::getline(std::cin, email);

	std::string phoneNumber;
	std::cout << "phoneNumber:";
	std::getline(std::cin, phoneNumber);

	std::string birthday;
	std::cout << "birthday:";
	std::getline(std::cin, birthday);

	std::string favoriteMeal;
	std::cout << "favoriteMeal:";
	std::getline(std::cin, favoriteMeal);

	std::string underwearColour;
	std::cout << "underwearColour:";
	std::getline(std::cin, underwearColour);

	std::string darkestSecret;
	std::cout << "darkestSecret:";
	std::getline(std::cin, darkestSecret);

	person._index = size;
	person.firstName = firstName;
	person.lastName= lastName;
	person.nickName= nickName;
	person.login= login;
	person.postalAddress= postalAddress;
	person.email= email;
	person.phoneNumber = phoneNumber;
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

bool is_number(std::string str) {
	if (str.length() > 1){
		std::cout << "To many chars\n";
		return(false);
	} else if (std::isdigit(str[0])) {
		return(true);
	} else {
		std::cout << "is not a digit\n";
		return(false);
	}
	
}

int main() {
	std::string input;
	int size = 0;
	Person phoneBook[9];
	// std::cout << "commands: EXIT, ADD, SEARCH" << std::endl;

	while (input.compare("EXIT")) {

		if (input == "ADD") {
			if (size <= 8){
			add(phoneBook, size);
			size++;
			} else {
				std::cout << "your phonebook is full:" << std::endl;
			}
		}
		else if (input == "SEARCH") {
			std::cout << "searching.." << std::endl;
			search(phoneBook, size);
			std::cout << "select index:" << std::endl;
			 std:getline(std::cin, input);
			if (is_number(input)){
                int index;
                index = std::stoi(input);
                if (index <= size){
                    phoneBook[index].getAllData();
                }			
			}
		}

		std::cout << "commands: EXIT, ADD, SEARCH" << std::endl;
		std::getline(std::cin, input);
	}
	
}