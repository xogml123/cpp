#include "Zombie.hpp"

int	main()
{
	Zombie*		zHorde;
	
	zHorde = zombieHorde(zombieNum, "apple");
	for (int i = 0; i < zombieNum; i++)
	{
		zHorde[i].announce();
	}
	delete [] zHorde;
}