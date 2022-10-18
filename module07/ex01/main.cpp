#include "iter.hpp"

template<typename T>
void	print(T &tab)
{
	std::cout << tab;
}

int main()
{
	int tab[10] = {0,1,2,3,4,5,6,7,8,9};
	char tabchar[10] = "Tchoupiii";

	::iter(tab, 10, &print);
	std::cout << std::endl;
	::iter(tabchar, 10, &print);
	std::cout << std::endl;
}