#include <iostream>
#include <iomanip>

void hCalc(double height, int x)
{
	double foo{ height - (9.81 * (x * x) / 2) };
	if (foo > 0)
	{
		std::cout << "At " << x << " seconds, the ball is at height: " << foo << '\n';
		x = x + 1;
		hCalc(height, x);
	}
	else if (foo <= 0)
		std::cout << "At " << x << " seconds, the ball is on the ground.\n";
}

int main()
{
	double height{};
	std::cout << "Enter the height of the tower in meters: ";
	std::cin >> height;


	hCalc(height, 0);

}