#include "MutantStack.hpp"

int main()
{
    // std::stack<int> stack;
    // stack.push(5);
    // stack.push(17);                           // on peut voir que stack nimplemente pas les it
    // std::cout << stack.top() << std::endl;
    // stack<int>::iterator it = mstack.begin();
    // stack<int>::iterator ite = mstack.end();
    // ++it;
    // --it;

	std::cout <<  "----------- SUBJECT'S MAIN ------------\n" ;

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    std::cout <<  "----------------------------------------\n\n\n" ;

    std::cout <<  "--------- STD::STACK FUNCTIONS ---------\n" ;
    {
        MutantStack<int> mutantStack;
        std::cout <<  "PUSHING INTO THE MUTANT STACK: "  "9, 3, 2, 7, 0.\n\n" ;

        mutantStack.push(9);
        mutantStack.push(3);
        mutantStack.push(2);
        mutantStack.push(7);
        mutantStack.push(0);

        std::cout <<  "Use of "    "mutantStack.top()"  ": "  << mutantStack.top() << std::endl ;
        std::cout <<  "Use of "    "mutantStack.pop()"  ", then use of "   "mutantStack.top()"  ": " ;  
        
        mutantStack.pop();

        std::cout << mutantStack.top() << std::endl;
        
        std::cout <<  "Use of "    "mutantStack.size()"  ": "  << mutantStack.size() << std::endl ;

    }
    
    std::cout <<  "----------------------------------------\n\n\n" ;

    std::cout <<  "--------------- MY MAIN ----------------\n" ;
    MutantStack<int> mutantStack;
    std::list<int>  list;

    std::cout <<  "PUSHING INTO A LIST: "  "9, 3, 2, 7, 0.\n" ;

    list.push_back(9);
    list.push_back(3);
    list.push_back(2);
    list.push_back(7);
    list.push_back(0);

    std::cout <<  "PUSHING INTO A MUTANT STACK: "  "9, 3, 2, 7, 0.\n" ;

    mutantStack.push(9);
    mutantStack.push(3);
    mutantStack.push(2);
    mutantStack.push(7);
    mutantStack.push(0);

    MutantStack<int> copyMutantStack = mutantStack;
    std::list<int>  copyList = list;
    {
        std::cout <<  "\nGetting the value of the list via "  "iterator:"  "\n" ;

        std::list<int>::iterator it2 = copyList.begin();
        for (; copyList.end() != it2; it2++)
            std::cout <<   "Value: "  << *it2 << std::endl;

        std::cout <<  "\nGetting the value of the  MutantStack via "  "iterator:"   "\n" ;

        MutantStack<int>::iterator it = copyMutantStack.begin();
        for (; copyMutantStack.end() != it; it++)
            std::cout <<  "Value: "  << *it << std::endl;
        
    }

    {
        std::cout <<  "\nGetting the value of the list via "  "reverse iterator:"  "\n" ;
        
        std::list<int>::reverse_iterator it2 = copyList.rbegin();
        for (; copyList.rend() != it2; it2++)
            std::cout <<   "Value: "  << *it2 << std::endl;

        std::cout <<  "\nGetting the value of the MutantStack via "  "reverse iterator:"  "\n" ;

        MutantStack<int>::reverse_iterator it = copyMutantStack.rbegin();
        for (; copyMutantStack.rend() != it; it++)
           std::cout <<   "Value: "  << *it << std::endl;

    }
    std::cout <<  "----------------------------------------\n\n\n" ;

    return 0;
}