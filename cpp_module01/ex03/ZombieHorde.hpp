#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <string>
#include "Zombie.hpp"

class ZombieHorde{
	private:
		std::string type_;
		int			size_;
	public:
		ZombieHorde(const int& size);
		ZombieHorde(const std::string& type, const int& size);
		~ZombieHorde();
		void	announce() const;
};

#endif