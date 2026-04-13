#include <iostream>  // for std::cout and std::cin

// Asks the user to input three numbers and prints out those three numbers
int main()
{
    std::cout << "Enter three numbers: "; // ask user for three numbers

    int x{}; // define variable x to hold user input
    std::cin >> x; // get number from keyboard and store it in variable x

    int y{}; // define variable y to hold user input
    std::cin >> y; // get number from keyboard and store it in variable y

    int z{}; // define variable z to hold user input
    std::cin >> z; // get number from keyboard and store it in variable z

    std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";

    return 0;
}
