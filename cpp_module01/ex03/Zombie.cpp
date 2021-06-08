#include "Zombie.hpp"
const std::string Zombie::zombieName[nameNum]={
		"A",
		"B",
		"C",
		"D",
		"E",
		"F",
		"G",
		"H",
		"I",
		"J"
};
Zombie::Zombie()
:type_(std::string()), name_(std::string())
{

}

Zombie::Zombie(std::string type, std::string name)
:type_(type), name_(name)
{
	std::cout<<name_<<" creation!"<<std::endl;
	
}

Zombie::~Zombie()
{
	std::cout<<name_<<" dead!"<<std::endl;	
}

void	Zombie::announce() const
{
	std::cout<<"<"<<name_<<" ("<<type_<<")> Braiiiiiiinnnssss..."<<std::endl;
}

const std::string& Zombie::randomName()
{
	srand(time(NULL));
	return (zombieName[rand() % nameNum]);
}