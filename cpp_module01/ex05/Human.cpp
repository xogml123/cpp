#include "Human.hpp"

const Brain& Human::getBrain()
{
	return (br);
}
std::string Human::identify() const
{
	return (br.identify());
}

