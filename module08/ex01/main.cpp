#include "Span.hpp"

int main()
{

	//test basic 

	Span sp = Span(6);
	// std::vector<int> vec;
	// vec.push_back(3);
	// vec.push_back(1);
	// vec.push_back(4);
	try {
		// sp.addNumber(vec.begin(), vec.end());
		// sp.addNumber(vec.begin(), vec.end());
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// sp.addNumber(1111111111);
		
	}
	catch(const std::exception & e) {
		std::cout <<  "ERROR: "  << e.what() << std::endl;
	}
	std::cout <<  "----------------- BASIC TEST -----------------\n" ;
	std::cout <<  "SPAN SP CONTAINS: 6, 3, 17, 9, 11\n" ;
	std::cout <<  "SPAN SP shortest span: "  << sp.shortestSpan() << std::endl;
	std::cout <<  "SPAN SP longest span: "  << sp.longestSpan() << std::endl;
	std::cout <<  "----------------------------------------------\n\n\n" ;
	
	// //test erreur

	Span sp_err(1);

	std::cout <<  "-------------- ERROR GESTION TEST ------------\n" ;
	try {
		std::cout <<  "Trying to add a number in a size 1 SPAN class:\n" ;
		sp_err.addNumber(6);
		std::cout <<  "SUCCESS !!\n" ;
		std::cout <<  "Trying to add second a number in a size 1 SPAN class:\n" ;
		sp_err.addNumber(7);
	}
	catch(const std::exception& e) {
		std::cout <<  "ERROR: "  << e.what() << std::endl;
	}

	std::cout <<  "\nTrying to use the shortestSpan() function:\n" ;
	try {
		std::cout << sp_err.shortestSpan() << std::endl;
	
	}
	catch(const std::exception& e) {
		std::cout <<  "ERROR: "  << e.what() << std::endl;
	}

	std::cout <<  "\nTrying to use the longestSpan() function:\n" ;
	try {
		std::cout << sp_err.longestSpan() << std::endl;
	}
	catch(const std::exception& e) {
		std::cout <<  "ERROR: "  << e.what() << std::endl;
	}
	
	Span zero(0);
	try {
		std::cout <<  "\nTrying to add a number in a size 0 SPAN class:\n" ;
		zero.addNumber(6);
	}
	catch(const std::exception& e) {
		std::cout <<  "ERROR: "  << e.what() << std::endl;
	}
	try {
		std::cout <<  "\nTrying to get the shortestSpan() of a size 0 SPAN class:\n" ;
		std::cout << zero.shortestSpan() << std::endl;
	}
	catch(const std::exception& e) {
		std::cout <<  "ERROR: "  << e.what() << std::endl;
	}
	
	std::cout <<  "----------------------------------------------\n\n\n" ;
	// test avec plage d'iterator

	std::cout <<  "----------- PLAGE D'ITERATOR TEST ------------\n" ;
	std::vector<int> randomelyFillVec;
	Span sp10000(10000);

	srand(time(NULL));                			//
	for(int i=0; i< 10000; i++){    			//
		randomelyFillVec.push_back(rand());   	// REMPLI UN VECTOR DE VARIABLE ALEATOIRE
	}								  			//

	std::cout <<  "UN VECTEUR "  "'randomelyFillVec'"  " AVEC 10 000 VALEURS ALEATOIRE A ETE CREE\n" ;

	try {
		sp10000.addNumber(randomelyFillVec.begin(), randomelyFillVec.end()); // L'INSERT VIA UN ITERATOR SUR LE DEBUT ET LA FIN DE CE VECTOR
		std::cout <<  "CALL DE LA FONCTION: "  "sp10000.addNumber("  "randomelyFillVec.begin()"  ", "  "randomelyFillVec.end()"  ")\n" ;
	}
	catch(const std::exception& e) {
		std::cout <<  "ERROR: "  << e.what() << std::endl;
	}

	std::cout <<  "SPAN sp10000 shortest span: "  << sp10000.shortestSpan() << std::endl;
	std::cout <<  "SPAN sp10000 longest span: "  << sp10000.longestSpan() << std::endl;

	std::cout << "Adding a 10001 element" << std::endl;
	try {
		sp10000.addNumber(42);
		std::cout <<  "SUCCESS !!\n" ;
	}
	catch(const std::exception& e) {
		std::cout <<  "ERROR: "  << e.what() << std::endl;
	}
	std::cout <<  "----------------------------------------------\n\n\n" ;
	return 0;
}