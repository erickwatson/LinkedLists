// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// hash example
#include <iostream>
#include <functional>
#include <string>

int main()
{
	char nts1[] = "Test";
	char nts2[] = "Test";
	std::string str1(nts1);
	std::string str2(nts2);

	std::hash<char*> ptr_hash;
	std::hash<std::string> str_hash;

	std::cout << "same hashes:\n" << std::boolalpha;
	std::cout << "nts1 and nts2: " << (ptr_hash(nts1) == ptr_hash(nts2)) << '\n';
	std::cout << "str1 and str2: " << (str_hash(str1) == str_hash(str2)) << '\n';

	//https://www.geeksforgeeks.org/hashing-data-structure/


	system("PAUSE");
	return 0;
}