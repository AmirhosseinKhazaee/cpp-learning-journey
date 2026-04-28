/*
    Purpose:
    - Demonstrate how C++ streams format boolean values
    - Show that std::cout keeps formatting flags until changed
    - Explain boolalpha and noboolalpha manipulators

    Key Concepts:
    - Default bool printing: 0 or 1
    - boolalpha: prints "true" / "false"
    - Formatting flags in std::cout are persistent
*/

#include <iostream>

using namespace std;

int main()
{
    bool isValid = true;

    cout << "Default (no boolalpha): " << isValid << endl;

    // Enable human-readable boolean text
    cout << boolalpha;
    cout << "With boolalpha: " << isValid << endl;

    // Still enabled (stream formatting persists)
    cout << "Still boolalpha: " << isValid << endl;

    // Disable it
    cout << noboolalpha;
    cout << "After noboolalpha (back to 1/0): " << isValid << endl;

    return 0;
}
