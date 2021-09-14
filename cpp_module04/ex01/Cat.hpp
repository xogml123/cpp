#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>
#include "Brain.hpp"
class Cat : public Animal{
	public:
		Cat();
		Cat(Cat const& c);
		~Cat();
		void makeSound() const;
	private:
		Brain* mBrain;
};
#endif