#include "whatever.hpp"

int main()
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
	return 0;



	// int a = 1;
	// int b = 2;

	// char c = 'a';
	// char d = 'b';

	// std::cout <<  " BEFORE USE OF SWAP:\nA = "  << a <<  " B = "  << b;
	// std::cout <<  "\nC = "  << c << " D = "  << d << std::endl;

	// ::swap(a, b);
	// ::swap(c, d);

	// std::cout << " AFTER USE OF SWAP:\nA = "  << a <<  " B = "  << b;
	// std::cout <<  "\nC = "  << c << " D = "  << d << std::endl;

	// std::cout << " \nWHAT IS THE MIN VALUE BETWEEN "  << a <<  " AND "  << b;
	// std::cout <<  "\n" << ::min(a, b) << std::endl; //call de min()

	// std::cout << " \nWHAT IS THE MIN VALUE BETWEEN "  << c <<  " AND "  << d;
	// std::cout <<   "\n" << ::min(c, d) << std::endl; //call de min()

	
	// std::cout << " \nWHAT IS THE MAX VALUE BETWEEN "  << a <<  " AND "  << b;
	// std::cout <<  "\n" << ::max(a, b) << std::endl; //call de max()

	// std::string e = "chaine1";
	// std::string f = "chaine2";

	// std::cout << " \nWHAT IS THE MAX VALUE BETWEEN "  << e <<  " AND "  << f;
	// std::cout <<   "\n" << ::max(e, f) << std::endl; //call de max()
}