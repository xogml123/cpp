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
};

std::ostream& operator<<(std::ostream& out, Fixed const& fx);

#endif