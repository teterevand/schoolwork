#include "pch.h"
#include <iostream>

int main()
{
	int x = 20;
	int y = 30;

	std::cout << "First number: " << x << std::endl;
	std::cout << "Second number: " << y << std::endl;

	std::cout << "Swapping...\n";
	
	int tmp = x;
	x = y;
	y = tmp;

	std::cout << "First number: " << x << std::endl;
	std::cout << "Second number: " << y << std::endl;

	return 0;
}