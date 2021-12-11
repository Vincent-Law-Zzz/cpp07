#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T>
class Array
{
	private:
		T *_arr_data;
		unsigned int _num;
	public:
	Array(void)
	{
		_arr_data = NULL;
	}

	Array(unsigned int num)
	{
		_arr_data = new T[num];
		_num = num;
	}

	Array(Array const &other)
	{
		this->_arr_data = NULL;
		*this = other;
	}

	~Array(void)
	{
		if (this->_arr_data != NULL)
			delete [] _arr_data;
	}

	Array &operator=(Array const &other)
	{
		if (this  == &other)
			return *this;
		this->_num = other._num;
		if (this->_arr_data != NULL)
			delete [] this->_arr_data;
		this->_arr_data = new T[_num];
		for (int i = 0; i < _num; i++)
			this->_arr_data[i] = other._arr_data[i];
		return *this;
	}

	T &operator[](int i)
	{
		if (i < 0 || i >= _num)
			throw std::exception();
		return _arr_data[i];
	}

	T const &operator[](int i) const
	{
		if (i < 0 || i >= _num)
			throw std::exception();
		return _arr_data[i];
	}

	unsigned int size() const{
		return _num;
	}
};
#endif