#include <iostream>

// checks if x (a number between 0-9) is prime
bool isPrime(int x)
{   
    bool prime {false};
    if (x == 2)
        prime = true;
    else if (x == 3)
        prime = true;
    else if (x == 5)
        prime = true;
    else if (x == 7)
        prime = true;
    return prime;
}

int main()
{
    std::cout << "Enter a number between 0-9" << '\n';

    int x {};
    std::cin >> x;

    if (isPrime(x) == true)
        std::cout << "The digit is prime" << '\n';
    else
        std::cout << "The digit is not prime" << '\n';
    return 0;
}
