#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human{
	private:
		Brain br;
	public:
		std::string identify() const;
		const Brain& getBrain();
};
#endif