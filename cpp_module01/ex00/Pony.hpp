#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony{
	private:
		std::string name_;
	public:
		Pony(std::string name);
		~Pony();
		void	cry();
		void	run();
};

void	ponyOnTheHeap(std::string name);
void	ponyOnTheStack(std::string name);
#endif