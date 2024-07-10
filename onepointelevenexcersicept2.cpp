#include <iostream>

int main() 
{

    int num {};                                                   //brace initialization of variable num

    std::cout << "Enter an integer: ";
    std::cin >> num;                                              //asks user for value of num

    std::cout << "Double " << num << " is: " << num * 2 << '\n';          //prints the double of value num

    std::cout << "Triple " << num << " is: " << num * 3 << '\n';          //prints the triple of value num

}