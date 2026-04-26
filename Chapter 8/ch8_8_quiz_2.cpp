// Write a program that prints out the letters a through z along with their ASCII codes. Use a loop variable of type char.

#include <iostream>

int main()
{
    char letter{'a'};
    while (static_cast<int>(letter) <= static_cast<int>('z'))
    {
        std::cout << letter << " ASCII Code: " << static_cast<int>(letter) << '\n' ;
        ++letter;
    }

    std::cout << "done!\n";

    return 0;
}
