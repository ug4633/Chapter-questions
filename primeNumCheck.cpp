#include <iostream>
bool checkIfPrime(int x)
{
	//if prime return true 
	if (x == 2 or x == 3 or x == 5 or x == 7)
		return true;

	//elif return false
	else
		return false;
}

int main() 
{
	int x{};

	//ask for a number between 0 to 9
	std::cout << "Enter a number between 0 ~ 9: ";
	std::cin >> x;

	//check if the number is a prime number 
	bool foo{checkIfPrime(x)};

	//if true, print digit is prime, else print not prime
	if (foo == true)
		std::cout << "Your number is a prime number\n";
	else if (foo == false)
		std::cout << "Your number is not a prime number\n";
}