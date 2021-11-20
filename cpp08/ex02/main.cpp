#include "mutantstack.hpp"
#include <iostream>
#include <vector>
#include <list>

void print_int(int i)
{
    std::cout << "| " << i << " ";
}

void print_stack(MutantStack<int> s)
{
    if (s.size() == 0)
    {
        std::cout << "|| <- TOP\n";
    }
    else
    {
        std::for_each(s.begin(), s.end(), print_int);
        std::cout << " <-TOP\n";
    }
}

int main()
{

    std::cout << "\n=====SUBJECT MAIN=====\n\n";
    MutantStack<int> mstack;
    {
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
    }

    std::cout << "\n=====SAME MAIN WITH AN ITERABLE=====\n\n";
    {

        std::list<int> not_stack;
        not_stack.push_back(5);
        not_stack.push_back(17);
        std::cout << not_stack.back() << std::endl;
        not_stack.pop_back();
        std::cout << not_stack.size() << std::endl;
        not_stack.push_back(3);
        not_stack.push_back(5);
        not_stack.push_back(737);
        //[...]
        not_stack.push_back(0);
        std::list<int>::iterator it = not_stack.begin();
        std::list<int>::iterator ite = not_stack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    std::cout << "\n=====MORE TESTS=====\n\n";
    {
        MutantStack<int> stek = MutantStack<int>(mstack);
        for (int i = 0; i < 7; i++)
        {
            stek.push(-42);
        }
        print_stack(mstack);
        print_stack(stek);
        std::cout << "\npopping all stack...\n";
        while (!stek.empty())
        {
            stek.pop();
        }
        print_stack(stek);
        std::cout << "\nstack.begin() - stack.end(): " << stek.begin() - stek.end() << std::endl;
        std::cout << "stack.begin() == stack.end(): " << (stek.begin() == stek.end()) << std::endl;
    }
    return 0;
}
