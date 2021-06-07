#include "Pony.hpp"

void	ponyOnTheHeap(std::string name)
{
	Pony* pony;
	
	pony = new Pony(name);
	pony->cry();
	pony->run();
	delete pony;
}

void	ponyOnTheStack(std::string name)
{
	Pony pony(name);

	pony.cry();
	pony.run();
}

int		main()
{
	std::cout<<"heap pony start"<<std::endl;
	ponyOnTheHeap("heap");
	std::cout<<"stack pony start"<<std::endl;
	ponyOnTheStack("stack");
	std::cout<<"end"<<std::endl;
}