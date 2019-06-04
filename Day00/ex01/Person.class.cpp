#include <iostream>
#include "PhoneBook.class.hpp"

std::string Person::display(std::string str) {
	int size = 0;
	int len = 10;

	std::string ret = "          ";
	if (str.length() >= 10) {
		for (size_t i = 0; i <= str.length() && i < 10; i++){
			ret[i] = str[i];
			size++;
		}
		ret[9] = '.';
	} else {
		len = len - str.length();
		for (size_t i = 0; i <= str.length() && i < 10; i++){
			ret[len] = str[i];
			len++;
		}
	}
return (ret);
}

void Person::search() {
	std::cout << display(std::to_string(_index)) + " | " + display(firstName) + " | " + display(lastName) + " | " + display(nickName) + " |\n";
}

void Person::getAllData() {
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
