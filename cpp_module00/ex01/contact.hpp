#ifndef CONTACT_HPP
# define CONTACT_HPP

# define ATT_NUM 5
class Contact
{
	enum columns{
			first_name,
			last_name,
			nickname,
			phone_number,
			darkest_secret
	};
	private:
		static const std::string	metadata[ATT_NUM];
		std::string data[ATT_NUM];
	public:
		Contact();
		~Contact();
		
		void		stdin_init();
		std::string	at(int j) const;
		std::string metadata_at(int j) const;
};
#endif