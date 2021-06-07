#include "My_Awesome_PhoneBook.hpp"
#include "contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

const std::string	Contact::metadata[11]={
			"first_name",
			"last_name",
			"nickname",
			"login",
			"postal_address",
			"email_address",
			"phone_number",
			"birthday_date",
			"favorite_meal",
			"underwear_color",
			"darkest_secret"
		};

void	Contact::stdin_init()
{
	std::cout<<"Contact creation starts."<<std::endl;
	for (int i = 0; i < 11;i++)
	{
		std::cout<<metadata[i]<<" : ";
		std::getline(std::cin, data[i]);
	}
	std::cout<<"one contact is created."<<std::endl;
}

std::string Contact::at(int j)
{
	return (data[j]);
}

std::string Contact::metadata_at(int j)
{
	return (metadata[j]);
}