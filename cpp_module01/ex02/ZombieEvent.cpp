#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
:type_(std::string())
{
}

void	ZombieEvent::setZombieType(const std::string& type)
{
	type_=type;
}

Zombie* ZombieEvent::newZombie(std::string name) const
{
	Zombie* ret;

	ret = new Zombie(type_, name);
	return (ret);
}

Zombie* ZombieEvent::randomChump() const
{
	Zombie* ret;

	ret = new Zombie(type_, Zombie::randomName());
	ret->announce();
	return (ret);
}
