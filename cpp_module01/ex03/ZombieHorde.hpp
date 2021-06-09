#ifndef ZOMBIEHorde_HPP
# define ZOMBIEHorde_HPP

#include <string>
#include "Zombie.hpp"

class ZombieHorde{
	private:
		std::string type_;
		int			size_;
		Zombie*	horde_;
		void	sizeCheck();
	public:
		ZombieHorde();
		ZombieHorde(const int& size);
		ZombieHorde(const std::string& type, const int& size);
		~ZombieHorde();
		void	announce() const;
};

#endif