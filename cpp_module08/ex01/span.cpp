#include "span.hpp"

Span::Span(unsigned int n)
:N(n)
, contents(0)
{

}

Span::Span(std::vector<int>::iterator begin, std::vector<int>::iterator end)
:contents(begin, end)
{}

void Span::addNumber(int num)
{
	if (contents.size() == N)
		throw FullElementException();
	else
	{
		contents.push_back(num);
	}
	return ;
}
unsigned int Span::shortestSpan()const
{
	if (contents.size() == 0 || contents.size() == 1)
		throw NoSpanException();
	else
	{
		std::vector<int> contentsCopy(contents);
		std::vector<int> contentsCopyDiff;

		sort(contentsCopy.begin(), contentsCopy.end());
		for (std::vector<int>::size_type i = 0; i < contentsCopy.size() - 1; i++)
		{
			contentsCopyDiff.push_back(contentsCopy[i + 1] - contentsCopy[i]);
		}
		int minIndex = 0;

		for (std::vector<int>::size_type i = 0; i < contentsCopyDiff.size(); i++)
		{
			if (contentsCopyDiff[i] < contentsCopyDiff[minIndex])
				minIndex = i;
		}
		return (contentsCopyDiff[minIndex]);
	}
	
}
unsigned int Span::longestSpan()const
{
	std::vector<int> contentsCopy(contents);

	if (contents.size() == 0 || contents.size() == 1)
		throw NoSpanException();
	sort(contentsCopy.begin(), contentsCopy.end());

	return (contentsCopy[contentsCopy.size() - 1] - contentsCopy[0]);
	
}