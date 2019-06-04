#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
#include <string>

class Person {
    public:
	int			_index;
    std::string  firstName
                ,lastName
                ,nickName
                ,login
                ,postalAddress
                ,email
                ,phoneNumber
                ,birthday
                ,favoriteMeal
                ,underwearColour
                ,darkestSecret;
    
  public:
    void search();
    void getAllData();
    std::string display(std::string str);
};

#endif // MYCLASS_H