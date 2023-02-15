#include "EasyFind.hpp"
#include <vector>
#include <iostream>

int	main()
{
	std::vector<int>	v;

    
	for (int i = 0; i <= 42; i++) {
		v.push_back(i);
	}


	try {
		std::cout << *easyfind(v, 6) << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Value not found " << e.what() << std::endl;
	}

    try {
		std::cout << *easyfind(v, 42) << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Value not found " << e.what() << std::endl;
	}

    try {
		std::cout << *easyfind(v, 200) << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Value not found " << e.what() << std::endl;
	}

    try {
		std::cout << *easyfind(v, -1) << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Value not found " << e.what() << std::endl;
	}
	

}