#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	FragTrap ft("ft1");

	ft.Attack("Enemy1");
	ft.TakeDamage(10);
	ft.BeRepaired(100);
	ft.TakeDamage(100);
	ft.BeRepaired(50);
	ft.BeRepaired(100);
	ft.Attack("Enemy1");
	ft.Attack("Enemy1");
	ft.Attack("Enemy1");
	ft.Attack("Enemy1");
	ft.Attack("Enemy1");
	ft.Attack("Enemy1");
	ft.highFivesGuys();
}