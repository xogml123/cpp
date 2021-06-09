#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
:type_(std::string()), size_(0)
{
	std::cout<<"ZombieHorde : "<<type_<<", "<<size_<<std::endl;
}

ZombieHorde::ZombieHorde(const int& size)
:type_(std::string()), size_(size)
{
	std::cout<<"ZombieHorde : "<<type_<<", "<<size_<<std::endl;
	sizeCheck();
	horde_=new Zombie[size_];
}

ZombieHorde::ZombieHorde(const std::string& type, const int& size)
:type_(type), size_(size)
{
	std::cout<<"ZombieHorde : "<<type_<<", "<<size_<<std::endl;
	sizeCheck();
	horde_= new Zombie[size_];
	for(int i = 0; i<size_;i++)
	{
		horde_[i].setTypeName(type_, Zombie::randomName());
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Horde " << type_ << " is being destroyed !" << std::endl;
	delete	[] horde_;
}

void	ZombieHorde::sizeCheck()
{
	if (size_ <= 0)
	{
		std::cout<<"Size need to be more than 0. Size is adjusted to 0"<<std::endl;
		size_ = 0;
	}
}

void	ZombieHorde::announce() const
{
	for(int i = 0; i<size_;i++)
		horde_[i].announce();
}	

