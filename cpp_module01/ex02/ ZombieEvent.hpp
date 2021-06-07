#define 
class ZombieEvent{
	private:
		static const typeNum=5;
		static const zombieName[typeNum]={
		"Bommer",
		"Sniper",
		"Assasin",
		"Magician",
		"Knight"
		};
		std::string type;
	public:
		void setZombieType();
		Zombie* newZombie(std::string name);
		Zombie* randomChump();
};