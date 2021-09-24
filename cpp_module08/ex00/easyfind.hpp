#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <string>
#include <exception>
#include <vector>
#include <iostream>
class BadArgumentException : public std::exception
{
	public:
		const char * what() const throw()
		{
			return "Not found element in container";
		}
};

template <typename T>
typename T::const_iterator easyfind(const T & container, const int & elem)
{
	typename T::const_iterator iter;
	iter = std::find(container.begin(), container.end(), elem);
	if (iter == container.end())
		throw BadArgumentException();
	return iter;
};

#endif