// Question #4

// Now make the numbers print like this:

//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1

// Hint: Figure out how to make it print like this first:

// X X X X 1
// X X X 2 1
// X X 3 2 1
// X 4 3 2 1
// 5 4 3 2 1


#include <iostream>

int main()
{
    int outerLoop {5};

    while(outerLoop >= 1)
    {
        int innerLoop {6 - outerLoop};
        int i {5};
        while(i >= 1)
        {
            if (innerLoop == i)
            {
                std::cout << innerLoop << ' ';
                -- innerLoop;
            }
            else
                std::cout << "  ";
            -- i;

        }
        std::cout << '\n';
        --outerLoop;
    }
    return 0;
}
