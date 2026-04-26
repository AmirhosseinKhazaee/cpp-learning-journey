#include <iostream>

int main() {
    int a = 12;
    
    // Post-increment: use a, then increment it
    int b = a++; // b = 12, a = 13
    std::cout << "Post-increment (a++):\n";
    std::cout << "b = " << b << ", a = " << a << "\n\n";

    // Pre-increment: increment a, then use it
    a = 12;     // reset
    b = ++a;    // a = 13, then b = 13
    std::cout << "Pre-increment (++a):\n";
    std::cout << "b = " << b << ", a = " << a << "\n\n";

    // Multiplication
    a = 3;
    b = a * 3;
    std::cout << "Multiplication (a * 3):\n";
    std::cout << "a = " << a << ", b = " << b << "\n\n";

    // Division
    int c = b / 2;  // integer division
    std::cout << "Division (b / 2):\n";
    std::cout << "b = " << b << ", c = " << c << "\n\n";

    // Modulo
    c = b % 2;
    std::cout << "Modulo (b % 2):\n";
    std::cout << "b = " << b << ", c = " << c << "\n";

    return 0;
}
