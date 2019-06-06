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
	float toFloat(void)const;
	int toInt(void)const;
	Fixed(const Fixed &other);
	Fixed   &operator=(const Fixed &other);
	int getRawBits(void) const;
	void setRawBits(int const);
};
	std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif
