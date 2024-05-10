

#include "MutantStack.hpp"


int	main(int, char **)
{
	MutantStack<int> mstack;
	
	std::cout << "\nMY MUTANT STACK USAGE" << std::endl;
	std::cout << "---------------------" << std::endl;
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
	std::cout << "ITERATING THE STACK:" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "NOW REVERSE ITERATING:" << std::endl;
	MutantStack<int>::reverse_iterator itr = mstack.rbegin();
	MutantStack<int>::reverse_iterator iter = mstack.rend();
	++itr;
	--itr;
	while (itr != iter)
	{
		std::cout << *itr << std::endl;
		++itr;
	}
	std::stack<int> s(mstack);
	std::cout << std::endl;

	std::cout << "THE LIST USAGE" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::list<int> ml;
	ml.push_front(5);
	ml.push_front(17);
	std::cout << ml.front() << std::endl;
	ml.pop_front();
	std::cout << ml.size() << std::endl;
	ml.push_back(3);
	ml.push_back(5);
	ml.push_back(737);
	//[...]
	ml.push_back(0);
	std::cout << "ITERATING THE LIST:" << std::endl;
	std::list<int>::iterator its = ml.begin();
	std::list<int>::iterator ites = ml.end();
	++its;
	--its;
	while (its != ites)
	{
		std::cout << *its << std::endl;
		++its;
	}
	std::cout << "NOW REVERSE ITERATING:" << std::endl;
	std::list<int>::reverse_iterator itsr = ml.rbegin();
	std::list<int>::reverse_iterator itesr = ml.rend();
	++itsr;
	--itsr;
	while (itsr != itesr)
	{
		std::cout << *itsr << std::endl;
		++itsr;
	}
	std::cout << std::endl;
	
	return (0);
}

