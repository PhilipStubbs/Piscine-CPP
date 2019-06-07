#include "Fixed.class.hpp"
#include <cmath>

Fixed::Fixed(void){

	this->_fixedPointValue = 0;
    return ;
}

Fixed::~Fixed(void){
     return ;
}

Fixed::Fixed(int n){
	this->_fixedPointValue = n << _fracBits;
    return ;
}

Fixed::Fixed(float n){
	this->_fixedPointValue = (int)roundf((n * (double)(1 << _fracBits)));
}

Fixed::Fixed(const Fixed &other){
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
	return(this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw){
	this->_fixedPointValue = raw;
}

float Fixed::toFloat(void)const {
	return (this->_fixedPointValue / (float)(1<<Fixed::_fracBits));
}
int Fixed::toInt(void)const {
	return (this->_fixedPointValue >> _fracBits);
}

bool Fixed::operator>(const Fixed &other) {
	return (this->_fixedPointValue > other._fixedPointValue);
}

bool Fixed::operator<(const Fixed &other) {
	return (this->_fixedPointValue < other._fixedPointValue);
}

bool Fixed::operator>=(const Fixed &other) {
	return (this->_fixedPointValue >= other._fixedPointValue);
}

bool Fixed::operator<=(const Fixed &other) {
	return (this->_fixedPointValue <= other._fixedPointValue);
}

bool Fixed::operator==(const Fixed &other) {
	return (this->_fixedPointValue == other._fixedPointValue);
}

bool Fixed::operator!=(const Fixed &other) {
	return (this->_fixedPointValue != other._fixedPointValue);
}

Fixed   Fixed::operator+(const Fixed &other){
	Fixed update = this->toFloat() + other.toFloat();
	return(update);
}

Fixed   Fixed::operator-(const Fixed &other){
	Fixed update = this->toFloat() - other.toFloat();
	return(update);
}

Fixed   Fixed::operator*(const Fixed &other){
	Fixed update = this->toFloat() * other.toFloat();
	return(update);
}

Fixed   Fixed::operator/(const Fixed &other){
	Fixed update = this->toFloat() / other.toFloat();
	return(update);
}

Fixed  & Fixed::operator++(){
	this->_fixedPointValue++;
	return(*this);
}

Fixed   Fixed::operator++(int){
	Fixed result(*this);   // make a copy for result
	++(*this);              // Now use the prefix version to do the work
	return result;
}

Fixed&  Fixed::min(Fixed const &fix1, Fixed const& fix2){
	if (fix1.getRawBits() > fix2.getRawBits())
		return((Fixed&)fix2);
	else
		return((Fixed&)fix1);
}

Fixed&  Fixed::max(Fixed const & fix1, Fixed const& fix2){
if (fix1.getRawBits() < fix2.getRawBits())
		return((Fixed&)fix2);
	else
		return((Fixed&)fix1);
}
