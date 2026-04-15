#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age; // note: added std::ws here

    int nameLen {static_cast<int>(name.length()) };

    std::cout << "Your age + length of name is: " << nameLen + age << '\n';
}
