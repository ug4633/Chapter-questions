#include <iostream>

int main() {
    int x{}, y{}, z{}; //value initialization of x, y, z

    std::cout <<"Enter three numbers: "; //asks user for three numbers    
    std::cin >> x >> y >> z; //grabs 3 numbers from user then assigns to to x, y, z respectively

    std::cout <<"You entered " << x << ", " << y << ", and " << z << ".\n'"; //prints x, y, z

}