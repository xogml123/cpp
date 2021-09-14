#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout<<"--------------------------------------------------"<<std::endl;
	j->makeSound();
	i->makeSound();

	std::cout<<"--------------------------------------------------"<<std::endl;
	delete j;//should not create a leak
	delete i;



}