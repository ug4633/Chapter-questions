#include <iostream>

int main() 
{

    int x {};                                            //brace initialization of variable x

    std::cout << "Enter an integer: ";
    std::cin >> x;                                       //asks user for value of x

    std::cout << "Double that number is: " << x * 2;    //prints the double of value x
    
}