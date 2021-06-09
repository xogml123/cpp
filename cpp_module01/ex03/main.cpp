#include "ZombieHorde.hpp"


int	main()
{
	ZombieHorde	horde1("horde_one", 10);
	ZombieHorde* horde2;
	
	horde2 = new ZombieHorde("horde_two", 5);
	horde1.announce();
	horde2->announce();
	delete horde2;
}