#include "ClapTrap.hpp"

int	main()
{
	ClapTrap ct("ClapTrap 1");

	ct.Attack("Enemy 1");
	ct.TakeDamage(1);
	ct.BeRepaired(10);
	ct.TakeDamage(100);
	ct.BeRepaired(5);
	ct.BeRepaired(10);
	ct.Attack("Enemy 1");
	ct.Attack("Enemy 1");
	ct.Attack("Enemy 1");
	ct.Attack("Enemy 1");
	ct.Attack("Enemy 1");
	ct.Attack("Enemy 1");
}