#include <iostream>

struct Data { 
	std::string s1;
	std::string s2; 
	int n; 
};

char getRandomChar(){
    char c = 48 + rand() % 74;
    return c;    
}

Data *newStruct(){
	Data *ret = new Data;
	srand(time(0));
	
	ret->n = rand() % 100;
	for(int i = 0; i < 8; i++)	{
		ret->s1.push_back(getRandomChar());
		ret->s2.push_back(getRandomChar());
	}
	std::cout << "_Original data_" << std::endl
	<< ret->s1 << std::endl
	<< ret->s2 << std::endl
	<< ret->n << std::endl
	<< "________" << std::endl;
 return (ret);
}

void * serialize( void ){
	Data *ret = newStruct();
	void *var_name = reinterpret_cast<void *>(ret);
	return(var_name);
}

Data * deserialize( void * raw ){
	Data *var_name = reinterpret_cast<Data *>(raw);
	return(var_name);
}

int main()
{
	void * raw = serialize();
	std::cout << "memory address: " << raw << std::endl;
	
	Data *ret =deserialize(raw);

	std::cout << std::endl << "_New data_" << std::endl
	<< ret->s1 << std::endl
	<< ret->s2 << std::endl
	<< ret->n << std::endl
	<< "________" << std::endl;
	return 0;
}


// The
// serialized data is the concatenation of a random array of 8 alphanumerical characters, a
// random integer and a second random array of 8 alphanumerical characters.