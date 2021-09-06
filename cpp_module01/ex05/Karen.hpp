#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>
#include <iostream>

class Karen{

	typedef void	(Karen::*mFunc)(void) ;
	public:
		Karen();
		void complain( std::string level );

	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		int		findFuncIndex(const std::string& comp);
		f funcs[4];
		std::string	funcNames[4];
};

#endif