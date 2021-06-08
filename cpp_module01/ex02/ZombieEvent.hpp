#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <string>
#include "Zombie.hpp"

class ZombieEvent{
	private:
		std::string type_;
	public:
		ZombieEvent();
		void setZombieType(const std::string& type);
		Zombie* newZombie(std::string name) const;
		Zombie* randomChump() const;
};
#endif