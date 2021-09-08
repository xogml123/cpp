#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>
#include <iostream>

enum eSign{
		debug,
		info,
		warning,
		error,
		nothing
	};


class Karen{

typedef void (Karen::*funcPtr)(void);


	public:
		Karen();
		void complain( std::string level );
		static const funcPtr	funcs[];
		static const std::string	funcNames[];
		int		findFuncIndex(const std::string& comp);

	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

};



#endif