#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <cstdlib>
# include <ctime>
# include <iostream>
# include <string>

const int	zombieNum = 5;

class Zombie{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce() const;
		void	setName(const std::string& name);
	private:
		std::string name_;
};

Zombie* zombieHorde( int N, std::string name );

#endif