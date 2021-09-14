#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal{
	public:
		WrongAnimal();
		~WrongAnimal();
		void makeSound() const;
		std::string getType() const;

	protected:
		std::string mType;
};
#endif