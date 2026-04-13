# include <iostream>

int main()
{
    std::cout << "Enter a single character: ";

    char x {};
    std::cin >> x;

    int ascii{ x };

    std::cout << "You entered '" << x << "', which has ASCII code " << ascii << ".\n";
}
