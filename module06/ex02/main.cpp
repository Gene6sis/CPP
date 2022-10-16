#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	//Elle crée aléatoirement une instance de A, B ou C et la retourne en tant que pointeur sur Base.
	//Utilisez ce que vous souhaitez pour l’implémentation du choix aléatoire

	int r = rand() % 3;

	switch (r)
	{
		case 0:
			return (new A());
			break;
		case 1:
			return (new B());
			break;
		case 2:
			return (new C());
			break;
		default:
			break;
	}
	return (0);
}

void identify(Base* p)
{
	//Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C".
	(void)p;

	try {
		A &a = dynamic_cast<A &>(*p);
		std::cout << "p is an A";
	}
	catch (std::string &e) {}

	try {
		B &b = dynamic_cast<B &>(*p);
		std::cout << "p is an B";
	}
	catch (std::string &e) {}

	try {
		C &c = dynamic_cast<C &>(*p);
		std::cout << "p is an C";
	}
	catch (std::string &e) {}
}

void identify(Base& p)
{
	//Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C". 
	//Utiliser un pointeur dans cette fonction est interdit.
	(void)p;

	try {
		A &a = dynamic_cast<A &>(p);
		std::cout << "p is an A";
	}
	catch (std::string &e) {}

	try {
		B &b = dynamic_cast<B &>(p);
		std::cout << "p is an B";
	}
	catch (std::string &e) {}

	try {
		C &c = dynamic_cast<C &>(p);
		std::cout << "p is an C";
	}
	catch (std::string &e) {}
}

int main()
{
	srand(time(NULL));

	A a = A();
	identify(a);
}