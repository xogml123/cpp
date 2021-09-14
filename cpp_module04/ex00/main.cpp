#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
int main()
{
	const Animal* meta = new Animal();
	const WrongAnimal* wAnimal = new WrongCat();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wAnimal->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	wAnimal->makeSound();
	delete meta;
	delete wAnimal;
	delete j;
	delete i;
}