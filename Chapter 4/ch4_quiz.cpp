// Write the following program: The user is asked to enter 2 floating point numbers (use doubles). The user is then asked to enter one of the following mathematical symbols:
// +, -, *, or /. The program computes the answer on the two numbers the user entered and prints the results. If the user enters an invalid symbol, the program should print nothing.

// Example of program:

// Enter a double value: 6.2
// Enter a double value: 5
// Enter +, -, *, or /: *
// 6.2 * 5 is 31

# include <iostream>

double inputFloat()
{
    std::cout << "Enter a double value: ";

    double input {};
    std::cin >> input;

    return input;
}

char inputOperator()
{
    std::cout << "Enter +, -, * or /: ";

    char mat_symbol {};
    std::cin >> mat_symbol;
    return mat_symbol;

}

void doMath(double val1, double val2, char math_symbol)
{   
    double result{};
    if (math_symbol == '+')
        result = val1 + val2;
    else if (math_symbol == '-')
        result = val1 - val2;
    else if (math_symbol == '*')
        result = val1 * val2;
    else if (math_symbol == '/')
        result = val1 / val2;
    else
        return;
    
    std::cout << val1 << " " << math_symbol << " " << val2 << " is " << result;
}

int main()
{
    double val1 {inputFloat()};
    double val2 {inputFloat()};
    char symbol {inputOperator()};
    doMath(val1, val2, symbol);

    return 0;
}
