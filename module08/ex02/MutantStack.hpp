#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <iterator>
# include <vector>
# include <list>
# include <stack>  
# include <exception>

template<typename T>
class MutantStack: public std::stack<T> // std::stack< int, std::deque<int> > test; la stack contient enfaite un deque
{                                       // et this->c(container) permet dacceder au fonction du deque
    public:
        MutantStack(): std::stack<T>() {};
        MutantStack(MutantStack<T> const& mutantStack) : std::stack<T>(mutantStack){
        }
        ~MutantStack() { };


        MutantStack&	operator=(MutantStack<T> const& mutantStack) {
            this->c = mutantStack.c;
            return *this;
        }

        typedef typename std::deque<T>::iterator	        iterator; // juse un iterator deque pour manipuler la data
        typedef typename std::deque<T>::reverse_iterator	reverse_iterator;

        iterator	begin() {
            return this->c.begin(); 
        }
        iterator	end() { 
            return this->c.end();
        }

        reverse_iterator	rbegin() { 
            return this->c.rbegin();
        }
        reverse_iterator	rend() { 
            return this->c.rend(); 
        }

};

#endif