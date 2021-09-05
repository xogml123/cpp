#include "My_Awesome_PhoneBook.hpp"
#include "phonebook.hpp"
#include "contact.hpp"

bool	unvalid_index_arr(const std::string& index_arr)
{
	for (std::string::size_type i = 0; i < index_arr.size(); i++)
	{
		if (!isdigit(index_arr[i]))
			return (true);
	}
	return (false);
}

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
			if (pb.phonebook_num() == 8)
			{
				std::cout<<"Phonebook is full!"<<std::endl;
				continue ;
			}
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
		else
			continue ;
	}
}