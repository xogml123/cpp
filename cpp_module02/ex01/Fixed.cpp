#include "Fixed.hpp"

Fixed::Fixed()
:value(0)
{
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& fx)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = fx;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = num << this->len;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf(num * (1 << this->len));
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}

Fixed&	Fixed::operator=(const Fixed& fx)
{
	std::cout<<"Assignation operator called"<<std::endl;
	this->value = fx.value;
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return (this->value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout<<"setRawBits member function called"<<std::endl;
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

std::ostream& operator<<(std::ostream& out, Fixed const& fx)
{
	out << fx.toFloat();
	return (out);
}


