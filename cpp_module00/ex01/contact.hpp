#ifndef CONTACT_HPP
# define CONTACT_HPP
class Contact
{
	enum columns{
			first_name,
			last_name,
			nickname,
			login,
			postal_address,
			email_address,
			phone_number,
			birthday_date,
			favorite_meal,
			underwear_color,
			darkest_secret
		};
	private:
		static const std::string	metadata[11];
		std::string data[11];
	public:
		Contact();
		~Contact();
		
		void		stdin_init();
		std::string	at(int j);
		std::string metadata_at(int j);
};
#endif