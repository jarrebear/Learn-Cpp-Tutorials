 #include <iostream>

int doubleNumber(int num)
{
    return num*2;
}


int main()
{

    std::cout << "Input an integer to double: ";
    
    int input {};
    std::cin >> input;

    std::cout << "Your doubled value is: " <<doubleNumber(input) << '\n';

    return 0;
}
