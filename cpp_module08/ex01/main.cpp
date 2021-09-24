#include "span.hpp"


int	main()
{
	Span span(numberofElement);
	srand(time(NULL));

	try{
		//span.longestSpan();
		//span.shortestSpan();
	
		for (std::vector<int>::size_type i=0; i < numberofElement; i++)
		{
			span.addNumber(rand() % (numberofElement* 100));
		}
		//span.addNumber(rand() % (numberofElement * 100));
		std::cout<<span.longestSpan()<<std::endl;
		std::cout<<span.shortestSpan()<<std::endl;
	
	}
	catch (const std::exception& except)
	{
		std::cout<<except.what()<<std::endl;
	}

	
}

// int main()
// {
// 	srand(time(NULL));
// 	try{
// 		std::vector<int> forCopyConstructor(numberofElement);
// 		for (std::vector<int>::size_type i=0; i < numberofElement; i++)
// 				forCopyConstructor[i] = rand() % (numberofElement * 100);
// 		Span spanCopy(forCopyConstructor.begin(), forCopyConstructor.end());

// 		std::cout<<spanCopy.longestSpan()<<std::endl;
// 		std::cout<<spanCopy.shortestSpan()<<std::endl;

// 	}
// 	catch (const std::exception& except)
// 	{
// 		std::cout<<except.what()<<std::endl;
// 	}
	
// }