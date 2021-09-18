#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "Unequiped.hpp"
int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->unequip(3);
	me->unequip(2);
	me->unequip(1);
	me->unequip(0);
	// for (int i = 0; i < 4; i++)
	// {
	// 	me->u
	// }
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);


	delete bob;
	delete me;
	delete src;
	system("leaks a.out");
	return 0;
}