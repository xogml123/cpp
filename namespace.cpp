#include <iostream>

namespace integer
{
	int add(int x, int y)
	{
		return (x+y);
	}
}
namespace real
{
	double add(double x, double y)
	{
		return (x+y);
	}
}
int	main()
{
	std::cout<< integer::add(3,4)<<std::endl;
	std::cout<< real::add(4.0, 4.0)<<std::endl;

}