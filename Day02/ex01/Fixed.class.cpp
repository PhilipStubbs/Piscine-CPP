#include "Fixed.class.hpp"
#include <cmath>

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
    return ;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(int n){
    std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = n << _fracBits;
    return ;
}

Fixed::Fixed(float n){
    std::cout << "float constructor called" << std::endl;
	this->_fixedPointValue = (int)roundf((n * (double)(1 << _fracBits)));
}

Fixed::Fixed(const Fixed &other){
    std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other){
	this->_fixedPointValue = other._fixedPointValue;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed){
	out << fixed.toFloat();
	return (out);
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
	return(this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

float Fixed::toFloat(void)const {
	return (this->_fixedPointValue / (float)(1<<Fixed::_fracBits));
}
int Fixed::toInt(void)const {
	return (this->_fixedPointValue >> _fracBits);
}