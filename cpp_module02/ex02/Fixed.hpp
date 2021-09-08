#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>

class Fixed{
	private:
		int	value;
		static const int len = 8;
	public:
		Fixed();
		Fixed(const Fixed& fx);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();
		Fixed&	operator=(const Fixed& fx);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		bool	operator>(const Fixed& fx);
		bool	operator<(const Fixed& fx);
		bool	operator>=(const Fixed& fx);
		bool	operator<=(const Fixed& fx);
		bool	operator==(const Fixed& fx);
		bool	operator!=(const Fixed& fx);
		Fixed	operator+(const Fixed& fx);
		Fixed	operator-(const Fixed& fx);
		Fixed	operator*(const Fixed& fx);
		Fixed	operator/(const Fixed& fx);
		Fixed&	operator++();
		Fixed&	operator--();//전위
		Fixed	operator++(int);
		Fixed	operator--(int);//후위
		static Fixed& min(Fixed& f1, Fixed& fx);
		static const Fixed& min(const Fixed& f1, const Fixed& fx);
		static Fixed& max(Fixed& f1, Fixed& fx);
		static const Fixed& max(const Fixed& f1, const Fixed& fx);
};

std::ostream& operator<<(std::ostream& out, Fixed const& fx);
#endif