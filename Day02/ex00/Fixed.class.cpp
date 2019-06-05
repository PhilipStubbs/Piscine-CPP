#include "Fixed.class.hpp"

const int	_fracBits = 8;

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &other){
    std::cout << "Copy constructor called" << std::endl;
    return ;
}

Fixed &Fixed::operator=(const Fixed &other){
    std::cout << "Assignation operator called" << std::endl;
    return (*this);
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;

    return ;
}