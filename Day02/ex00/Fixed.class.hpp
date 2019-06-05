#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int					_fixedPointValue;
	static const int	_fracBits;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &other);
	Fixed   &operator=(const Fixed &other);
	int getRawBits(void) const;
	void setRawBits(int const);
};

#endif