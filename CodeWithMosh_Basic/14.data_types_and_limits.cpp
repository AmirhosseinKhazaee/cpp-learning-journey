#include <iostream>
#include <limits>

using namespace std;

int main()
{
    // sizeof gives the size in BYTES
    cout << "int : " << sizeof(int) << endl
         << "short : " << sizeof(short) << endl
         << "long : " << sizeof(long) << endl
         << "long long : " << sizeof(long long) << endl
         << "float : " << sizeof(float) << endl
         << "double : " << sizeof(double) << endl
         << "long double : " << sizeof(long double) << endl
         << "char : " << sizeof(char) << endl
         << "bool : " << sizeof(bool) << endl;

    cout << "\n--- numeric_limits ---\n";

    cout << "int min : " << numeric_limits<int>::min() << endl;
    cout << "int max : " << numeric_limits<int>::max() << endl;

    cout << "float min (smallest positive) : "
         << numeric_limits<float>::min() << endl;

    cout << "float lowest (most negative) : "
         << numeric_limits<float>::lowest() << endl;

    cout << "float max : " << numeric_limits<float>::max() << endl;

    cout << "\n--- Overflow demo ---\n";

    int number = numeric_limits<int>::max();
    cout << "max int : " << number << endl;
    cout << "after ++ (overflow) : " << ++number << endl;
}
