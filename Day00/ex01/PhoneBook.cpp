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

public:
	std::string getFirstName() {return firstName;};
	std::string getLastName() {return lastName;};
	std::string getNickName() {return nickName;};
	std::string getLogin() {return login;};
	std::string getPostalAddress() {return postalAddress;};
	std::string getEmail() {return email;};
	std::string getPhoneNumber() {return phoneNumber;};
	std::string getBirthday() {return birthday;};
	std::string getFavoriteMeal() {return favoriteMeal;};
	std::string getUnderwearColour() {return underwearColour;};
	std::string getDarkestSecret() {return darkestSecret;};


	void setIndex(int index) {_index = index;};
	void setFirstName(std::string firstname){this->firstName = firstname;};
	void setLastName(std::string surname){this->lastName = surname;};
	void setNickname(std::string nickname){this->nickName = nickname;};
	void setLogin(std::string logIn){this->login = logIn;};
	void setPostalAddress(std::string postaladdress){this->postalAddress = postaladdress;};
	void setEmailAddress(std::string emailaddress){email = emailaddress;};
	void setPhoneNumber(std::string phonenumber){phoneNumber = phonenumber;};
	void setBirthdayDate(std::string bday){birthday = bday;};
	void setFavoriteMeal(std::string favoritemeal){favoriteMeal = favoritemeal;};
	void setUnderwearColor(std::string underwearcolour){underwearColour = underwearcolour;};
	void setDarkestSecret(std::string darkestsecret){darkestSecret = darkestsecret;};
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

void search(Person phoneBook[]){
	std::cout << "tTEST";
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
			search(phoneBook);
		}
		std::cin >> input;
	}
}