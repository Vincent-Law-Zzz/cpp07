#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

class My_class
{
	private:
		std::string _str;
	public:
		My_class(void) : _str("{star}💫") {}
		std::string getStr(void) const {return _str;}
};

std::ostream &operator<<(std::ostream &oper, My_class const &other){ oper << other.getStr(); return oper;}

template<typename T> void print( T const & x ) { std::cout << x << std::endl;}
template<class T> void iter(T *arr,int const &len, void (*f)(T const &other))
{
	int counter = 0;

	while (counter < len)
		f(arr[counter++]);
}

#endif