#include "ScavTrap.hpp"

int	main()
{
	ScavTrap st("st1");

	st.Attack("Enemy1");
	st.TakeDamage(10);
	st.BeRepaired(100);
	st.TakeDamage(100);
	st.BeRepaired(50);
	st.BeRepaired(100);
	st.Attack("Enemy1");
	st.Attack("Enemy1");
	st.Attack("Enemy1");
	st.Attack("Enemy1");
	st.Attack("Enemy1");
	st.Attack("Enemy1");
	st.guardGate();

}