#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

template<typename T>
typename T::iterator	easyfind(T &containers, int nb)
{
	typename T::iterator it = std::find(containers.begin(), containers.end(), nb);
	if (it == containers.end())
		throw std::overflow_error("Number not in containers");
	return (it);
}

#endif