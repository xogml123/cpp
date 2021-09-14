#include "Cat.hpp"

Cat::Cat()
:Animal()
{
	mType = std::string("Cat"); 
	std::cout<<"Cat "<<mType<<" has just been created."<<std::endl;
}

void Cat::makeSound() const
{
		std::cout<<"Cat "<<mType<<" make sound."<<std::endl;
}


Cat::~Cat()
{
	std::cout<<"Cat "<<mType<<" has just been destructed."<<std::endl;
}