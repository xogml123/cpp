#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
:mType(std::string())
{
	std::cout<<"WrongAnimal "<<mType<<" has just been created."<<std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout<<"WrongAnimal "<<mType<<" make sound."<<std::endl;
}

std::string WrongAnimal::getType() const
{
	return (mType);
}

WrongAnimal::~WrongAnimal()
{
	std::cout<<"WrongAnimal "<<mType<<" has just been destructed."<<std::endl;
}