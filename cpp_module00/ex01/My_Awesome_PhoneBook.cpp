#include "My_Awesome_PhoneBook.hpp"
class Phonebook
{
	private:
		Contact contacts[8];
		int contacts_num;
	public:
		Phonebook();
		~Phonebook();
		void	add(Contact& contact);
		void	search();
}

Phonebook::Phonebook()
{
	contacts_num = 0;
}
void	Phonebook::add(Contact& contact)
{
	if (contacts_num == 8)
		std::cout<<"Phonebook is full!"<<std::endl;
	else
	{
		contacts[contacts_num++] = contact;
	}
}
void	Phonebook::search()
{
	std::cout<<"|index     |first name|last name |nickname  |"<<std::endl;
	std::cout<<
}
class Contact
{
	private:
		enum metadata{
			first_name;
			last_name;
			nickname;
			login;
			postal_address;
			email_address;
			phone_number;
			birthday_date;
			favorite_meal;
			underwear_color;
			darkest_secret;
		};
		std::string data[11];
	public:
		void	stdin_init();
		
}

void	Contact::stdin_init()
{
	for (int i =0; i < 11;i++)
		std::getline(std::cin, data[0]);
}

int	main()
{
	Phonebook pb;
	Contact contact;
	std::string command;

	while (1)
	{
		std::cin>>command;
		if (!command.compare("ADD"))
		{
			contact.stdin_init();
			pb.add(contact);
		}
		else if (!command.compare("EXIT"))
			exit(0);
		else if (!command.compare("SEARCH"))
		{
			pb.search();
		}
	}
	
	
}