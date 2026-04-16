// Sample output:

// Mary has a few apples.
// How many apples do you have? 1
// You have a single apple.

// getQuantityPhrase() should take a single int parameter representing the quantity of something and return the following descriptor:

//     < 0 = “negative”
//     0 = “no”
//     1 = “a single”
//     2 = “a couple of”
//     3 = “a few”
//     > 3 = “many”

// getApplesPluralized() should take a single int parameter parameter representing the quantity of apples and return the following:

//     1 = “apple”
//     otherwise = “apples”

// This function should use the conditional operator.

#include <iostream>
#include <string>

// Write the function getQuantityPhrase() here
std::string_view getQuantityPhrase(int numApples)
{
    if (numApples < 0)
        return "negative";
    else if (numApples == 0)
        return "no";
    else if (numApples == 1)
        return "a single";
    else if (numApples == 2)
        return "a couple of";
    else if (numApples == 3)
        return "a few";
    else
        return "many";
}

// Write the function getApplesPluralized() here
std::string_view getApplesPluralized(int numApples)
{
    int singularApple {1};
    return ((numApples == singularApple) ? "apple" : "apples");
    // if (numApples == 1)
    //     return "apple";
    // else
    //     return "apples";
}

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
