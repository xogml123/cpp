#include "Dog.hpp"

Dog::Dog()
:Animal()
{
	mType = std::string("Dog"); 
	std::cout<<"Dog "<<mType<<" has just been created."<<std::endl;
}

void Dog::makeSound() const
{
		std::cout<<"Dog "<<mType<<" make sound."<<std::endl;
}


Dog::~Dog()
{
	std::cout<<"Dog "<<mType<<" has just been destructed."<<std::endl;
}