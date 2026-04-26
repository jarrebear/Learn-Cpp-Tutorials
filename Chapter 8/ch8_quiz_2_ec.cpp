// Question #2

// A prime number is a natural number greater than 1 that is evenly divisible (with no remainder) only by 1 and itself.

// Complete the following program by writing the isPrime() function using a for-loop. When successful, the program will print “Success!”.

// Make sure that assert triggers even if we compile in release mode

// Extra credit:

// The for-loop in the above solution is suboptimal for two reasons:

//     It checks even divisors. We don’t need to test these (except for 2).
//     It checks every number up to x to see if it is a divisor. A non-prime number (a composite number) must have at least one 
//     divisor less than or equal to its square root, so checking for divisors beyond the square root of x is unnecessary. std::sqrt(x) 
//     (in the <cmath> header) returns the square root of x.

// For the latter, we have two options: calculate std::sqrt(x) prior to the loop, then test our loop variable against that value. Alternately, 
// we can optimize std::sqrt(x) out of the comparison entirely by squaring both sides of the comparison (h/t to reader JJag for suggesting this) 
// (see the hint if you need additional help with this). We’ll use this latter option in the quiz solution.

// Show Hint

// Update the above solution to implement both of these optimizations.

#undef NDEBUG

#include <cassert> // for assert
#include <iostream>
#include <cmath> 

bool isPrime(int x)
{
    if (x <= 1)
        return false;
    else if (x == 2)
        return true;
    else if (x % 2 == 0)
        return false;
    for (int i {3}; i <= std::sqrt(x); i+=2)
        if (x % i == 0)
        {
            return false;
        }
    return true;
    
    // write this function using a for loop
}

int main()
{
    assert(!isPrime(0)); // terminate program if isPrime(0) is true
    assert(!isPrime(1));
    assert(isPrime(2));  // terminate program if isPrime(2) is false
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!\n";

    return 0;
}
