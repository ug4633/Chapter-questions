#include <iostream>

int main()
{
	char x{};

	//ask user for a single character
	std::cout << "Enter a single character: ";
	std::cin >> x

	//print converted thing
	std::cout << "You entered \'" << x << "\', which has ASCII code " << static_cast<int>(x) << ".\n";

}