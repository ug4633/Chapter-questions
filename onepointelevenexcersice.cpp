#include <iostream>

int main() 
{

    int num {};                                                   //brace initialization of variable x

    std::cout << "Enter an integer: ";
    std::cin >> num;                                              //asks user for value of x

    std::cout << "Double that number is: " << num * 2 << '\n';    //prints the double of value x
    
}
