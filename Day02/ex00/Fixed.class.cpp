#include "Fixed.class.hpp"

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
    return ;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &other){
    std::cout << "Copy constructor called" << std::endl;
	*this = other;
    return ;
}

Fixed &Fixed::operator=(const Fixed &other){
    std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = other._fixedPointValue;
    return (*this);
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
	return(this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

