// Question #3

// Invert the nested loops example so it prints the following:

// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1

#include <iostream>

int main()
{
    int outerLoop {1};

    while(outerLoop <= 5)
    {
        int innerLoop {5 - outerLoop + 1};
        while(innerLoop >= 1)
        {
            std::cout << innerLoop << ' ';
            -- innerLoop;

        }
        std::cout << '\n';
        ++outerLoop;
    }
    return 0;
}
