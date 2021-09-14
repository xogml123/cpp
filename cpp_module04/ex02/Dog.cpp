#include "Dog.hpp"

Dog::Dog()
{
	mBrain = new Brain();
	mType = std::string("Dog"); 
	std::cout<<"Dog "<<mType<<" has just been created."<<std::endl;
}

Dog::Dog(Dog const& d)
{
	mType = d.getType();
	mBrain = new Brain();
	for (int i = 0; i < 100; i++)
		mBrain->atIdeas(i) = d.mBrain->atIdeas(i);
	std::cout<<"Dog "<<mType<<" copy constructor is called."<<std::endl;	
}
	
void Dog::makeSound() const
{
	std::cout<<"Dog "<<mType<<" make sound."<<std::endl;
}


Dog::~Dog()
{
	delete mBrain;
	std::cout<<"Dog "<<mType<<" has just been destructed."<<std::endl;
}