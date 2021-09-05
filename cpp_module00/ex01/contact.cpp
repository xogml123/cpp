#include "My_Awesome_PhoneBook.hpp"
#include "contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

const std::string	Contact::metadata[ATT_NUM]={
			"first_name",
			"last_name",
			"nickname",
			"phone_number",
			"darkest_secret"
};

void	Contact::stdin_init()
{
	std::cout<<"Contact creation starts."<<std::endl;
	for (int i = 0; i < ATT_NUM;i++)
	{
		std::cout<<metadata[i]<<" : ";
		std::getline(std::cin, data[i]);
	}
	std::cout<<"one contact is created."<<std::endl;
}

std::string Contact::at(int j) const
{
	return (data[j]);
}

std::string Contact::metadata_at(int j) const
{
	return (metadata[j]);
}