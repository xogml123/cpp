#include "span.hpp"
#include <vector>
#include <algorithm>

Span::Span()
{
	
}

Span::Span(unsigned int n):n(n)
{

}

Span::Span(Span const &other)
{
	*this = other;
}

Span::~Span()
{

}

Span &Span::operator=(Span const &other)
{
	n = other.n;
	vector = other.vector;
	return (*this);
}

void Span::addNumber(int num)
{
	if (vector.size() == (unsigned long)n)
		throw OutLimitsException();
	vector.push_back(num);
}

long Span::shortestSpan()
{
	if (vector.size() <= 1)
		throw NoSpanException();
	
	std::vector<int> sorted_vector(vector);
	std::sort(sorted_vector.begin(), sorted_vector.end());
	
	long ret = (long)sorted_vector[1] - (long)sorted_vector[0];
	for (unsigned long i = 1; i < sorted_vector.size()-1; i++)
		ret = std::min(ret, (long)sorted_vector[i+1]-(long)sorted_vector[i]);
	return (ret);
}

long Span::longestSpan()
{
	if (vector.size() <= 1)
		throw NoSpanException();
	
	long max = *std::max_element(vector.begin(), vector.end());
	long min = *std::min_element(vector.begin(), vector.end());

	return (max - min);
}

const char* Span::OutLimitsException::what() const throw()
{
	return "there is no enough space.";
}

const char* Span::NoSpanException::what() const throw()
{
	return "there is no span.";
}