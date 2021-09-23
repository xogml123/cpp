#include "Array.hpp"

template<typename T>
Array<T>::Array()
:mContent(0)
, mSize(0)
{}

template<typename T>
Array<T>::Array(unsigned int size)
:mContent(new T[size])
, mSize(size)
{}

template<typename T>
Array<T>::Array(const Array<T>& array)
{
	*this = array;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& array)
{
	delete [] mContent;
	mContent = new T[array.size()];
	for (int i = 0; i < array.size(); i++)
		mContent[i] = array[i];
	mSize = array.size();
	return (*this);
}

template<typename T>
T&		Array<T>::operator[](int size)
{
	if (size < 0 || size >= (int)mSize)
		throw IndexOutOfRange();
	return (mContent[size]);
}

template<typename T>
unsigned int	Array<T>::size() const
{
	return (mSize);
}

template<typename T>
Array<T>::~Array()
{
	delete [] mContent;
}

int main()
{
    Array<float> ok(9);

    try {
		for (unsigned int i = 0; i < ok.size(); i++)
			ok[i] = i;
   		std::cout << ok[2] << std::endl;
    }
    catch(const std::exception&e) {
		std::cerr << e.what() << '\n';
    }
	return (0);
}