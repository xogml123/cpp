#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>
#include "Brain.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(Dog const& d);
		~Dog();
		void makeSound() const;
	private:
		Brain* mBrain;
};
#endif