#include <iostream>
#include "io.h"

int readNumber()
{
    std::cout << "Input an integer: ";
    
    int data{};
    std::cin >> data;

    return data;
}

void writeAnswer(int input1, int input2)
{
   std::cout << input1 << " + " << input2 << " is : " << input1 + input2 << '\n';
}
