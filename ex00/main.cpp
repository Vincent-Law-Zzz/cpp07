#include "whatever.hpp"

int main( void ) 
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::string str1 = "Hello";
	std::string str2 = "world";
	std::cout << std::endl << "Test with string" << std::endl;
	std::cout << "Before swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;
	::swap(str1, str2);
	std::cout << "After swap: str1 = " << str1 << ", str2 = " << str2 << std::endl;
	std::cout << "max: " << ::max(str1, str2) << std::endl;
	std::cout << "min: " << ::min(str1, str2) << std::endl;
	
	return 0;
}