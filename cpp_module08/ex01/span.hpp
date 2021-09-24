#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

#define numberofElement 100

class Span
{
	public:
		Span(unsigned int n);
		Span(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void addNumber(int num) ;
		unsigned int shortestSpan()const ;
		unsigned int longestSpan()const;
	class FullElementException: public std::exception{
		const char* what() const throw(){
			return "full of element. cannot add number.";
		}
	};
	class NoSpanException : public std::exception{
		const char* what() const throw(){
			return "no span to find in container.";
		}
	};
	private:
		unsigned int N;
		std::vector<int> contents;
};

#endif