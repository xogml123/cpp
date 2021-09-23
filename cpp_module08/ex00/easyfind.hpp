#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>

template <typename T>
T	easyfind(T container, int target)
{
	for (std::vector<int>::iterator itr = container.begin(); itr != container.end(); i++)
	{
		if (*itr == target)
			return (*itr);
	}
}

#endif