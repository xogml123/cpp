#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie*	zombies = new Zombie[N];
	for (int i = 0; i< zombieNum; i++)
	{
		zombies[i].setName(name + std::to_string(i + 1)); 
	}
	return (zombies);
}