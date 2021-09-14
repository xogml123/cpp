#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

class Dog : public Animal{
	public:
		Dog();
		~Dog();
		void makeSound() const;
};
#endif