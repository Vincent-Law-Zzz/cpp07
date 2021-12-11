#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

class My_class 
{
	private:
		int _num;
	public:
	My_class(int n) : _num(n)
	{}
	bool operator==(My_class const &other){return this->_num == other._num;}
	bool operator<=(My_class const &other){return this->_num <= other._num;}
	bool operator>=(My_class const &other){return this->_num >= other._num;}
	bool operator<(My_class const &other){return this->_num < other._num;}
	bool operator>(My_class const &other){return this->_num > other._num;}
	bool operator!=(My_class const &other){return this->_num != other._num;}
	int getNum(void) const
	{
		return this->_num;
	}
};

std::ostream &operator<<(std::ostream &oper,My_class &other)
{
	oper << other.getNum();
	return oper;
}

template<class T> void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<class T> T const &max(T const &a,T const &b)
{
	if (a > b)
		return a;
	else 
		return b;
}

template<class T> T const &min(T const &a, T const &b)
{
	if (a < b)
		return a;
	else 
		return b;
}

#endif