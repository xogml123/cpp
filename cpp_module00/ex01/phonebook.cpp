#include "My_Awesome_PhoneBook.hpp"
#include "phonebook.hpp"

Phonebook::Phonebook()
{
	contacts_num = 0;
}
Phonebook::~Phonebook()
{

}

int	Phonebook::phonebook_num()
{
	return (contacts_num);
}

void	Phonebook::push(Contact& contact)
{
	if (contacts_num == 8)
		std::cout<<"Phonebook is full!"<<std::endl;
	else
	{
		contacts[contacts_num++] = contact;
	}
}

void	Phonebook::show_all()
{
	if (contacts_num == 0)
		std::cout<<"Phonebook is empty."<<std::endl;
	else
	{
		std::cout<<"|index     |first name|last name |nickname  |"<<std::endl;
		for (int i = 0; i < contacts_num;i++)
		{
			std::cout<< "|";
			std::cout<<std::setw(10)<<i;
			std::cout<<"|";
			for (int j = 0; j < 3; j++)
			{
				if (contacts[i].at(j).length() > 10)
					std::cout<<contacts[i].at(j).substr(0, 9)<<".";
				else
					std::cout<<std::setw(10)<<contacts[i].at(j);
				std::cout<<"|";
			}
			std::cout<<std::endl;
		}

	}
}

void	Phonebook::input_index()
{
	int	index;

	std::cout<<"enter index ranged 0 to "<< contacts_num - 1<< " . : ";
	std::cin>>index;
	if (index >= 0 && index < contacts_num)
		for (int i= 0;i<11;i++)
		{
			std::cout<<contacts[index].metadata_at(i)<<" : ";
			std::cout<<contacts[index].at(i)<<std::endl;
		}
	else
		std::cout<<"wrong index."<<std::endl;
}
