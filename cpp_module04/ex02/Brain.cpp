#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		mIdeas[i] = std::string("eat");
	std::cout<<"Brain has just been created."<<std::endl;
}

std::string& Brain::atIdeas(int i)
{
	if (i < 0 || i >99)
		return (mIdeas[0]);
	else
		return (mIdeas[i]);
}


Brain::~Brain()
{
	std::cout<<"Brain has just been destructed."<<std::endl;
}