#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap dt("dt1");

	dt.Attack("Enemy1");
	dt.TakeDamage(10);
	dt.BeRepaired(100);
	dt.TakeDamage(100);
	dt.BeRepaired(50);
	dt.BeRepaired(100);
	dt.Attack("Enemy1");
	dt.Attack("Enemy1");
	dt.Attack("Enemy1");
	dt.Attack("Enemy1");
	dt.Attack("Enemy1");
	dt.Attack("Enemy1");
	dt.guardGate();
	dt.highFivesGuys();
	dt.whoAmI();
}