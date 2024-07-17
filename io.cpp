#include <iostream>
#include "io.h"

int readNumber()
{
	int x;
	std::cout << "Enter an integer: ";
	std::cin >> x;

	return x;
}

void writeAnswer(int x, int y)
{
	std::cout << x + y;
}