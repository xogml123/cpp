class Zombie{
	private:
		std::string type_;
		std::string name_;
	public:
		Zombie(std::string type, std::string name);
		void	announce();
};