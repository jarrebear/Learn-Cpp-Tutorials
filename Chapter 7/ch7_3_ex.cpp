#include <iostream>

int main()
{
    int x { 2 }; // local variable, no linkage
    std::cout << x << '\n';
    {
        int x { 3 }; // this declaration of x refers to a different object than the previous x
        std::cout << x << '\n';
    
    }
    std::cout << x << '\n';
    return 0;
}
