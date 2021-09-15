#include "Unequiped.hpp"

Unequiped::Unequiped(AMateria* am)
:m(am)
, link(0)
{}

Unequiped::~Unequiped()
{
	delete m;
}