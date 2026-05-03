/*
    Purpose:
    - Demonstrate multi-line string input using getline()
    - Show how to format structured output (mailing address)

    Key Concepts:
    - getline() reads full lines including spaces
    - Using multiple strings to build structured output
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string street, city, state, zipCode;

    cout << "Street: ";
    getline(cin, street);

    cout << "City: ";
    getline(cin, city);

    cout << "State: ";
    getline(cin, state);

    cout << "Zip Code: ";
    getline(cin, zipCode);

    cout << "\n---------------\n";
    cout << street << endl;
    cout << city << ", " << state << " " << zipCode << endl;

    return 0;
}
