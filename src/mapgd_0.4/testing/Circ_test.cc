#include "circular_list2.h"
#include <iostream>
#include "../typedef.h"

int main (int argc, char *argv[]){
	Circular_list<int> c_list(0);
	Circular_list<int>::iterator c_at=c_list.begin();
	c_at=c_list.insert(c_at, 1);
	c_list.insert(c_at, 2);
	c_at=c_list.begin();
	c_list.insert(c_at, 3, 3);
	std::cout << *c_list.begin() << std::endl;
	std::cout << "f1:" << *(++c_at) << ", " << *(++c_at) << ", " << *(++c_at) << std::endl;
	std::cout << "f2:" << *(++c_at) << ", " << *(++c_at) << ", " << *(++c_at) << std::endl;
	std::cout << "r1:" << *(--c_at) << ", " << *(--c_at) << ", " << *(--c_at) << std::endl;
	std::cout << "r2:"<< *(--c_at) << ", " << *(--c_at) << ", " << *(--c_at) << std::endl;

	std::cout << "uint32_t:"<< sizeof(uint32_t) << std::endl;
	std::cout << "uint64_t:"<< sizeof(uint64_t) << std::endl;
	std::cout << "long unsigned int:"<< sizeof(long unsigned int) << std::endl;

	return 0;
};
