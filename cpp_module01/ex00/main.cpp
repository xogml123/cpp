#include "Zombie.hpp"

int	main()
{
	Zombie*		z1;

	z1 = newZombie("z1");
	randomChump("z2");
	delete z1;
}