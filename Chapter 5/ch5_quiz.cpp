// Write a program that asks for the name and age of two people, then prints which person is older.

// Here is the sample output from one run of the program:

// Enter the name of person #1: John Bacon
// Enter the age of John Bacon: 37
// Enter the name of person #2: David Jenkins
// Enter the age of David Jenkins: 44
// David Jenkins (age 44) is older than John Bacon (age 37).

#include <iostream>
#include <string>

std::string getName(int personNumber)
{
    std::cout << "Enter the name of person #" << personNumber << ": ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    return name;
}

int getAge(std::string_view name)
{
    std::cout << "Enter the age of " << name << ": ";
    int age{};
    std::cin >> age;

    return age;
}

void whoIsOlder(std::string_view person1, std::string_view person2, int person1Age, int person2Age)
{
    if (person1Age > person2Age)
        std::cout << person1 << " (age " << person1Age << ") is older than " << person2 << " (age " << person2Age << ").";
    else
        std::cout << person2 << " (age " << person2Age << ") is older than " << person1 << " (age " << person1Age << ").";
}

int main()
{

    const std::string name1{getName(1)};
    const int age1{getAge(name1)};

    const std::string name2{getName(2)};
    const int age2{getAge(name2)};

    whoIsOlder(name1, name2, age1, age2);

    return 0;
}
