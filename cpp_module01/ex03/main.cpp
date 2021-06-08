#include "ZombieEvent.hpp"


int	main()
{
	ZombieEvent	ze;
	Zombie*		z1;
	Zombie*		z2;

	ze.setZombieType("special");
	std::cout<<"newZombie call"<<std::endl;
	z1 = ze.newZombie("newZombie");
	std::cout<<"randomChump call"<<std::endl;
	z2 = ze.randomChump();

	delete z1;
	delete z2;
}