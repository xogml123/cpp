#include "Fixed.hpp"



Fixed::Fixed()
:value(0)
{
}

Fixed::Fixed(const Fixed& fx)
{
	*this = fx;
}

Fixed::Fixed(const int num)
{
	this->value = num << this->len;
}

Fixed::Fixed(const float num)
{
	this->value = (int)roundf(num * (1 << this->len));
}

Fixed::~Fixed()
{
}

Fixed&	Fixed::operator=(const Fixed& fx)
{
	this->value = fx.value;
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	return (this->value);
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->value / float(1 << this->len));
}

int Fixed::toInt( void ) const
{
	return (this->value >> this->len);
}

bool	Fixed::operator>(const Fixed& fx)
{
	return (this->value > fx.getRawBits());
}
bool	Fixed::operator<(const Fixed& fx)
{
	return (this->value < fx.getRawBits());
}
bool	Fixed::operator>=(const Fixed& fx)
{
	return (this->value >= fx.getRawBits());
}
bool	Fixed::operator<=(const Fixed& fx)
{
	return (this->value <= fx.getRawBits());
}
bool	Fixed::operator==(const Fixed& fx)
{
	return (this->value == fx.getRawBits());
}
bool	Fixed::operator!=(const Fixed& fx)
{
	return (this->value != fx.getRawBits());
}



Fixed	Fixed::operator+(const Fixed& fx)
{
	Fixed	ret;

	ret.setRawBits(this->value + fx.getRawBits());
	return (ret);
}

Fixed	Fixed::operator-(const Fixed& fx)
{
	Fixed	ret;

	ret.setRawBits(this->value - fx.getRawBits());
	return (ret);
}

Fixed	Fixed::operator*(const Fixed& fx)
{
	Fixed	ret;

	ret.setRawBits((this->value * fx.getRawBits()) >> this->len);
	return (ret);
}

Fixed	Fixed::operator/(const Fixed& fx)
{
	Fixed	ret;

	ret.setRawBits((this->value / fx.getRawBits()) * (1 << this->len));
	return (ret);
}

std::ostream& operator<<(std::ostream& out, Fixed const& fx)
{
	out << fx.toFloat();
	return (out);
}

Fixed&	Fixed::operator++()
{
	++this->value;
	return (*this);
}
Fixed&	Fixed::operator--()
{
	--this->value;
	return (*this);
}
Fixed	Fixed::operator++(int)
{
	Fixed ret(*this);
	++this->value;
	return (*this);
}
Fixed	Fixed::operator--(int)
{
	Fixed ret(*this);
	--this->value;
	return (*this);
}

Fixed& Fixed::min(Fixed& f1, Fixed& fx)
{
	return ((f1 > fx)? fx: f1);
}
const Fixed& Fixed::min(const Fixed& f1, const Fixed& fx)
{
	return ((f1.getRawBits() > fx.getRawBits())? fx: f1);
}
Fixed& Fixed::max(Fixed& f1, Fixed& fx)
{
	return ((f1 < fx)? fx: f1);
}
const Fixed& Fixed::max(const Fixed& f1, const Fixed& fx)
{
	return ((f1.getRawBits() < fx.getRawBits())? fx: f1);
}
