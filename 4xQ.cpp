#include <iostream>

double calc(double x, char foo, double y)
{
	if (static_cast<int>(foo) == 42)
		return x * y;
	else if (static_cast<int>(foo) == 43)
		return x + y;
	else if (static_cast<int>(foo) == 45)
		return x - y;
	else if (static_cast<int>(foo) == 47)
		return x / y;
}

int main()
{
	double x{};
	double y{};
	char foo{};

	//ask for number 1
	std::cout << "Enter a double value: ";
	std::cin >> x;

	//ask for number 2
	std::cout << "Enter a double value: ";
	std::cin >> y;

	//ask for arithmetic operator
	std::cout << "Enter +, -, *, or /: ";
	std::cin >> foo;

	//print results
	std::cout << x << ' ' << foo << ' ' << y << " is " << calc(x, foo, y);
}