/*
    C.numeric-limits-and-overflow.cpp

    Purpose:
    - Demonstrate sizeof operator
    - Explore std::numeric_limits
    - Show integer overflow behavior
    - Clarify difference between min(), lowest(), and max()

    Key Concepts:
    - sizeof returns size in BYTES
    - numeric_limits<T>::min()
    - numeric_limits<T>::max()
    - numeric_limits<T>::lowest()
    - Integer overflow behavior (wrap-around in typical systems)
*/

#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "========== SIZEOF (in bytes) ==========\n\n";

    cout << "int         : " << sizeof(int) << endl;
    cout << "short       : " << sizeof(short) << endl;
    cout << "long        : " << sizeof(long) << endl;
    cout << "long long   : " << sizeof(long long) << endl;
    cout << "float       : " << sizeof(float) << endl;
    cout << "double      : " << sizeof(double) << endl;
    cout << "long double : " << sizeof(long double) << endl;
    cout << "char        : " << sizeof(char) << endl;
    cout << "bool        : " << sizeof(bool) << endl;

    cout << "\n========== NUMERIC LIMITS ==========\n\n";

    // Integer limits
    cout << "int min     : " << numeric_limits<int>::min() << endl;
    cout << "int max     : " << numeric_limits<int>::max() << endl;

    /*
        IMPORTANT (floating-point types):

        min()    -> smallest POSITIVE normal value
        lowest() -> most NEGATIVE value
        max()    -> largest positive value
    */

    cout << "\nfloat min (smallest positive) : "
         << numeric_limits<float>::min() << endl;

    cout << "float lowest (most negative)  : "
         << numeric_limits<float>::lowest() << endl;

    cout << "float max (largest positive)  : "
         << numeric_limits<float>::max() << endl;

    cout << "\n========== INTEGER OVERFLOW DEMO ==========\n\n";

    int number = numeric_limits<int>::max();

    cout << "Before overflow : " << number << endl;

    ++number;  // Overflow (undefined behavior in standard, wrap-around on most systems)

    cout << "After overflow  : " << number << endl;

    /*
        On most modern systems (two's complement),
        this wraps around to the minimum int value.

        Think of it like a number circle:

            ... -> -2 -> -1 -> 0 -> 1 -> 2 -> ...
                       ↑
            max int ----┘ (overflow wraps to min)
    */

    return 0;
}
