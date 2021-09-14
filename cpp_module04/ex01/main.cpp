#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout<<"-----------------------------------------------------"<<std::endl;
	
	Cat iCopy(*((const Cat *)i));
	Dog jCopy(*((const Dog *)j));
	Animal* animalArray[2];
	std::cout<<"-----------------------------------------------------"<<std::endl;

	animalArray[0] = new Dog();
	animalArray[1] = new Cat();
	std::cout<<"-----------------------------------------------------"<<std::endl;

	delete j;//should not create a leak
	delete i;
	std::cout<<"-----------------------------------------------------"<<std::endl;
	for (int i = 0; i < 2 ;i++)
		delete animalArray[i];
	std::cout<<"-----------------------------------------------------"<<std::endl;


}