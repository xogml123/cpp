#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class Animal(){
	public:
		Animal();
		~Animal();
		makeSound();
	protected:
		std::string mType;

};
#endif