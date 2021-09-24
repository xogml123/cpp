#include "easyfind.hpp"

int	main()
{
	std::vector<int> intArray(5, 0);

	for (std::vector<int>::size_type i = 0; i < 5; i++)
	{
		intArray.push_back(i);
	}
	try
	{
		std::cout<<"applying easyfind to intArray with element 3 : "<<*easyfind(intArray, 3)<<std::endl;
		std::cout<<"applying easyfind to intArray with element 3 : "<<*easyfind(intArray, 10)<<std::endl;

	}
	catch (const std::exception& except)
	{
		std::cout<<except.what()<<std::endl;
	}
}