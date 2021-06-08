#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <cstdlib>
# include <ctime>
# include <iostream>
# include <string>

class Zombie{
	private:
		static const int nameNum=10;
		static const std::string zombieName[nameNum];
		std::string type_;
		std::string name_;
	public:
		Zombie();
		Zombie(std::string type, std::string name);
		~Zombie();
		void	announce() const;
		static const std::string& randomName();
};
#endif