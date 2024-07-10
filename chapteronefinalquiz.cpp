#include <iostream>

int main()
{

    int num {};                                                                 //brace initialization of first number 
    int numScnd {};                                                             //brace initialization of second number

    std::cout << "Enter an integer: ";                                          
    std::cin >> num;                                                            //Asks user for first value and assigns it to num

    std::cout << "Enter another integer: ";
    std::cin >> numScnd;                                                        //Asks user for second value and assigns it to numScnnd

    std::cout << num << " + " << numScnd << " is " << num + numScnd << '\n';    //prints the product of first number and second number

    std::cout << num << " - " << numScnd << " is " << num - numScnd << '\n';    //prints the substitute of first number and second number

}
