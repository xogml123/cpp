#include "Brain.hpp"

std::string Brain::identify() const
{
	const long long address = (long long)this;
	std::stringstream ss;

	ss << "0x" << std::uppercase << std::hex << address;
	return (ss.str());
}