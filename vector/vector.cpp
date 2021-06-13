#include "vector.hpp"

Vector::Vector()
:data(new T), capacity(1), length(0)
{}

Vector::Vector(int n)
:data(new T n), capacity(n), length(0)
{}

Vector::~Vector()
{
	if (data)
		delete [] data;
}
// 새로 동적할당해야할 경우 2배크기로 해줌. -->push_swap의 amortization cost
// 를 O(1)으로 맞추기 위해.
void Vector::push_back(T str)
{
	if (capacity <= length)
	{
		T* temp = new T capacity * 2;
		for (int i = 0; i < length, i++)
			temp[i] = data[i];
		delete data;
		data = temp;
		capacity *= 2;
	}
	data[length] = str;
	length++;
}

T& operator[](int i)
{
	return(data[i]);
}

void	Vector::remove(int x)
{
	for (int i = x + 1, i < length, i++)
		data[i - 1] = data[i];
	length--;
}

int		Vector::size()
{
	return (length);
}