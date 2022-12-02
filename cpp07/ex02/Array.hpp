#ifndef ARRAY
# define ARRAY

#include <exception>

template<typename T>
class Array
{
private:
	T *arr;
	unsigned int _size;
public:
	Array()
	{
		arr = NULL;
		_size = 0;
	}
	Array(unsigned int n)
	{
		arr = new T[n];
		_size = n;
	}
	Array(const Array& cpy)
	{
		arr = NULL;
		*this = cpy;
	}
	T *getArr() const
	{
		return arr;
	}
	Array& operator=(const Array& ass)
	{
		if (this == &ass)
			return *this;
		if (arr!=NULL)
			delete [] arr;
		arr = new T[ass.size()];
		unsigned long i = 0;
		while(i < ass.size())
		{
			arr[i] = ass.getArr()[i];
			i++;
		}
		_size = ass.size();
		return *this;
	}

	T& operator[] (unsigned long i)
	{
		if (i >= _size)
			throw (std::exception());
		return arr[i];
	}

	const T& operator[] (unsigned long i) const
	{
		if (i >= _size)
			throw (std::exception());
		return arr[i];
	}

	~Array()
	{
		delete [] arr;
		arr = NULL;
		_size = 0;
	}

	unsigned int size() const
	{
		return _size;
	}
};

# endif

// class OutOfRange : public std::exception
// {
// public:
// 	const char* what() const throw()
// 	{
// 		return "Array::OutOfRange";
// 	}
// };