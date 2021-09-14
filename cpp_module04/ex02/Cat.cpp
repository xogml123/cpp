#include "Cat.hpp"

Cat::Cat()
{
	mBrain = new Brain();
	mType = std::string("Cat");
	std::cout<<"Cat "<<mType<<" has just been created."<<std::endl;
}

Cat::Cat(Cat const& c)
{
	mType = c.getType();
	mBrain = new Brain();
	for (int i = 0; i < 100; i++)
		mBrain->atIdeas(i) = c.mBrain->atIdeas(i);
	std::cout<<"Cat "<<mType<<" copy constructor is called."<<std::endl;

}

void Cat::makeSound() const
{
	std::cout<<"Cat "<<mType<<" make sound."<<std::endl;
}


Cat::~Cat()
{
	delete mBrain;
	std::cout<<"Cat "<<mType<<" has just been destructed."<<std::endl;
}