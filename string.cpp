#include <iostream>
using namespace std;

int	main()
{
	int size=15;
	char name1[size];
	name1[size - 2]='a';
	name1[size - 1]='\0';
	cout<<name1<<endl;
}