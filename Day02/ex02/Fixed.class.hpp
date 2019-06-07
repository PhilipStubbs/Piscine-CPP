#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int					_fixedPointValue;
	static const int	_fracBits = 8;

public:
	Fixed();
	Fixed(int n);
	Fixed(float n);
	~Fixed();
	Fixed(const Fixed &other);
	float 	toFloat(void)const;
	int 	toInt(void)const;
	Fixed   &operator=(const Fixed &other);
	int		 getRawBits(void) const;
	void 	setRawBits(int const);
	bool    operator>(const Fixed &other);
	bool    operator<(const Fixed &other);
	bool    operator>=(const Fixed &other);
	bool    operator<=(const Fixed &other);
	bool    operator==(const Fixed &other);
	bool    operator!=(const Fixed &other);
	Fixed   operator+(const Fixed &other);
	Fixed   operator-(const Fixed &other);
	Fixed   operator*(const Fixed &other);
	Fixed   operator/(const Fixed &other);
	Fixed   &operator++();
	Fixed   operator++(int);
	static Fixed &	min(Fixed const & fix1, Fixed const & fix2);
	static Fixed &	max(Fixed const & fix1, Fixed const & fix2);
};
	
	std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif
