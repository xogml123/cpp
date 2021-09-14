#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain{
	private:
		std::string mIdeas[100];
	public:
		Brain();
		~Brain();
		std::string& atIdeas(int i);
};
#endif