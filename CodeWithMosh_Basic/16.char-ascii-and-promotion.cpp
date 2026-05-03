/*
    16.char-ascii-and-promotion.cpp

    Purpose:
    - Show how char stores ASCII values
    - Demonstrate integer promotion using unary +
    - Show how characters can be created from numbers

    Key Concepts:
    - char is stored internally as a number (ASCII)
    - printing char shows the character
    - unary + promotes char to int and prints the numeric value
*/

#include <iostream>

using namespace std;

int main()
{
    char character = 'a';
    char charnum = 97;

    cout << character << endl;   // prints character: a
    cout << +character << endl;  // prints ASCII value: 97
    cout << charnum << endl;     // 97 interpreted as character -> a

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hi " << name << endl;

    return 0;
}
