#include "MutantStack.hpp"
#include <iostream>
#include <list>

void	print(int i) {
	std::cout << i << std::endl;
}

int main()
{

    {
        
	std::cout << "\n***std::list output***\n";
	std::list<int>	lst;

	lst.push_back(5);
	lst.push_back(17);
		
	std::cout << lst.back() << std::endl;
		
	lst.pop_back();
		
	std::cout << lst.size() << std::endl;
		
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);
		
	std::list<int>::iterator it = lst.begin();
	std::list<int>::iterator ite = lst.end();

	std::cout << std::endl;

	++it;
	--it;
	while (it != ite)
	{
	    std::cout << *it << std::endl;
		++it;
	}

	std::cout << "\nreverse printing using iterators" <<std::endl;
	std::for_each(lst.rbegin(), lst.rend(), print);		

    }
	

	std::cout << "\nMutantStack output" << std::endl;
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << std::endl;
	
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}

	std::cout << "\nreverse printing using iterators: " << std::endl; // reverse printing from here on for better visualization
	std::for_each(mstack.rbegin(), mstack.rend(), print);

	std::cout << "\nCopy constructing Mutant stack to mstack2 " << std::endl;
	MutantStack<int> mstack2(mstack);
	std::cout << "*POP*\n*POP*\n";
	mstack2.pop();
	mstack2.pop();

	std::cout << "\nmstack2:" << std::endl;

	std::for_each(mstack2.rbegin(), mstack2.rend(), print);
	std::cout << "\nmstack:" << std::endl;
	std::for_each(mstack.rbegin(), mstack.rend(), print);


	std::cout << "\nCopied mstack to mstack2" << std::endl;
	mstack2 = mstack;
	std::cout << "mstack2 values: " << std::endl;
	std::for_each(mstack2.rbegin(), mstack2.rend(), print);
	
	std::cout << std::endl;

	return 0;
}