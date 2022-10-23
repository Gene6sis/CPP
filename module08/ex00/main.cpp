#include "easyfind.hpp"

int main()
{
	int search;

	std::cout << "\t\tVector" << std::endl << std::endl;
	{
		std::vector<int> vector;
		std::vector<int>::iterator get_vector;

		int tab[10] = {0,1,2,3,4,5,6,7,8,9};

		for(int i = 0; i < 10; i++)
		{
			std::cout << tab[i] << " ";
			vector.push_back(tab[i]);
		}

		search = 5;
		std::cout << std::endl << "searching : " << search << std::endl;
		try {
			get_vector = easyfind(vector, search);
			std::cout << get_vector - vector.begin() << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "Error : " << e.what() << std::endl;
		}

		search = 12;
		std::cout << std::endl << "searching : " << search << std::endl;
		try {
			get_vector = easyfind(vector, search);
			std::cout << get_vector - vector.begin() << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "Error : " << e.what() << std::endl;
		}

		search = -12;
		std::cout << std::endl << "searching : " << search << std::endl;
		try {
			get_vector = easyfind(vector, search);
			std::cout << get_vector - vector.begin() << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "Error : " << e.what() << std::endl;
		}
	}

	std::cout << std::endl << std::endl << "\t\tList" << std::endl << std::endl;
	{
		std::list<int> list;
		std::list<int>::iterator get_list;

		int tab[10] = {0,1,2,3,4,5,6,7,8,9};
		for(int i = 0; i < 10; i++)
		{
			std::cout << tab[i] << " ";
			list.push_back(tab[i]);
		}

		search = 5;
		std::cout << std::endl << "searching : " << search << std::endl;
		try {
			get_list = easyfind(list, search);
			std::cout << "Value found" << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "Error : " << e.what() << std::endl;
		}

		search = 12;
		std::cout << std::endl << "searching : " << search << std::endl;
		try {
			get_list = easyfind(list, search);
			std::cout << "Value found" << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "Error : " << e.what() << std::endl;
		}

		search = -12;
		std::cout << std::endl << "searching : " << search << std::endl;
		try {
			get_list = easyfind(list, search);
			std::cout << "Value found" << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "Error : " << e.what() << std::endl;
		}
	}


	std::cout << std::endl << std::endl << "\t\tDeque" << std::endl << std::endl;
	{
		std::deque<int> deque;
		std::deque<int>::iterator get_deque;

		int tab[10] = {0,1,2,3,4,5,6,7,8,9};
		for(int i = 0; i < 10; i++)
		{
			std::cout << tab[i] << " ";
			deque.push_back(tab[i]);
		}

		search = 5;
		std::cout << std::endl << "searching : " << search << std::endl;
		try {
			get_deque = easyfind(deque, search);
			std::cout << "Value found" << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "Error : " << e.what() << std::endl;
		}

		search = 12;
		std::cout << std::endl << "searching : " << search << std::endl;
		try {
			get_deque = easyfind(deque, search);
			std::cout << "Value found" << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "Error : " << e.what() << std::endl;
		}

		search = -12;
		std::cout << std::endl << "searching : " << search << std::endl;
		try {
			get_deque = easyfind(deque, search);
			std::cout << "Value found" << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "Error : " << e.what() << std::endl;
		}
	}
}