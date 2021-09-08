#include "Karen.hpp"

void	mComplain(int c, Karen& k)
{
	for (int i = 3; i >= c; i--)
	{
		std::cout<<"[ "<< Karen::funcNames[i]<<" ]"<<std::endl;
			k.complain(Karen::funcNames[i]);
	}
}

int	main(int argc, char **argv)
{
	Karen k;

	if (argc !=2)
	{
		std::cout<<"input only one argument"<<std::endl;
		return (1);
	}
	// switch(k.findFuncIndex(std::string(argv[1])))
	// {
	// 	case nothing:
	// 		std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
	// 		break;
	// 	case error:
	// 		std::cout<<"[ error ]"<<std::endl;
	// 		k.complain(Karen::funcNames[3]);
	// 		break;
	// 	case warning:
	// 		std::cout<<"[ error ]"<<std::endl;
	// 		k.complain(Karen::funcNames[3]);
	// 		std::cout<<"[ warning ]"<<std::endl;
	// 		k.complain(Karen::funcNames[2]);
	// 		break;
	// 	case info:
	// 		std::cout<<"[ error ]"<<std::endl;
	// 		k.complain(Karen::funcNames[3]);
	// 		std::cout<<"[ warning ]"<<std::endl;
	// 		k.complain(Karen::funcNames[2]);
	// 		std::cout<<"[ info ]"<<std::endl;
	// 		k.complain(Karen::funcNames[1]);
	// 		break;
	// 	case debug:
	// 		std::cout<<"[ error ]"<<std::endl;
	// 		k.complain(Karen::funcNames[3]);
	// 		std::cout<<"[ warning ]"<<std::endl;
	// 		k.complain(Karen::funcNames[2]);
	// 		std::cout<<"[ info ]"<<std::endl;
	// 		k.complain(Karen::funcNames[1]);
	// 		std::cout<<"[ debug ]"<<std::endl;
	// 		k.complain(Karen::funcNames[0]);
	// 		break;
	// }
	switch(k.findFuncIndex(std::string(argv[1])))
	{
		case nothing:
			std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
			break;
		case error:
			mComplain(error, k);
			break;
		case warning:
			mComplain(warning, k);
			break;
		case info:
			mComplain(info, k);
			break;
		case debug:
			mComplain(debug, k);
			break;
	}
}