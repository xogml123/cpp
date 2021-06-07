#include "My_Awesome_PhoneBook.hpp"
#include "phonebook.hpp"
#include "contact.hpp"

int	main()
{
	Phonebook pb;
	Contact contact;
	std::string command;

	while (1)
	{
		std::cout<<"Enter a Command(ADD, SEARCH, EXIT) : ";
		std::getline(std::cin,command);
		if (!command.compare("ADD"))
		{
			contact.stdin_init();
			pb.push(contact);
		}
		else if (!command.compare("EXIT"))
			exit(0);
		else if (!command.compare("SEARCH"))
		{
			pb.show_all();
			if (pb.phonebook_num())
				pb.input_index();
		}
	}
}