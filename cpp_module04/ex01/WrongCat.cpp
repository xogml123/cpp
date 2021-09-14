#include "WrongCat.hpp"

WrongCat::WrongCat()
:WrongAnimal()
{
	mType = std::string("WrongCat"); 
	std::cout<<"WrongCat "<<mType<<" has just been created."<<std::endl;
}

void WrongCat::makeSound() const
{
		std::cout<<"WrongCat "<<mType<<" make sound."<<std::endl;
}


WrongCat::~WrongCat()
{
	std::cout<<"WrongCat "<<mType<<" has just been destructed."<<std::endl;
}