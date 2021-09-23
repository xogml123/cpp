#include "iter.hpp"

template<typename T>
void	iter(T* arr, int size, void (*f)(const T& t))
{
	for (int i = 0; i < size; i++)
	{
		f(arr[i]);
	}
	return ;
}
template<typename T>
void	printTemplate(const T& t)
{
	std::cout<<t<<std::endl;
}

int	main()
{
	int intArr[5] = {1, 2, 3, 4, 5};
	int size = 5;
	std::string stringArr[5] = {
		"one",
		"two",
		"three",
		"four",
		"five"
	};
	iter(intArr, size, printTemplate);
	std::cout<<"--------------------------------------"<<std::endl;
	iter(stringArr, size, printTemplate);
}