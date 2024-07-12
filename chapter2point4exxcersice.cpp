#include <iostream>

int doubleNumber(int x)                                                //this function doubles any number given
{
    return x * 2;
}

int main()
{
    int x {};                                                           //brace initialization of value x
    std::cout << "Enter an integer: ";                          
    std::cin >> x;                                                      //Asks user for an integer
    std::cout << "Double that number is: " << doubleNumber(x) << '\n';  //Prints the doube of x by calling the function doubleNumber()
}