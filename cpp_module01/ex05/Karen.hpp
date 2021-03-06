#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>
#include <iostream>


class Karen{

typedef void (Karen::*funcPtr)(void);

// struct Func{
// 	std::string funcName;
// 	void (Karen::*funcPtr)(void);
// };

	public:
		Karen();
		void complain( std::string level );

	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		int		findFuncIndex(const std::string& comp);
		static const funcPtr	funcs[];
		static const std::string	funcNames[];
};



#endif