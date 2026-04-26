#include <iostream>

int main() {
    int a = 10;

    // Operator precedence: multiplication happens before addition
    int b = 3 + 2 * 10;        // 3 + (2 * 10) = 23
    std::cout << b << "\n";

    // Using parentheses to change the order of evaluation
    b = (3 + 2) * 10;          // (3 + 2) = 5 → 5 * 10 = 50
    std::cout << b << "\n";

    // Integer vs floating‑point division note:
    //
    // If both operands of / are integers → result is INT (fraction is dropped)
    // To get a floating‑point result:
    //   - at least one operand must be a double/float
    //
    // Here, 'x' is double, so (x + 10) is also double.
    
    double x = 10;
    int y = 5;

    double exp = (x + 10) / (3 * y);  
    // (10 + 10) = 20 (double)
    // (3 * 5) = 15 (int)
    // → 20 / 15 = 1.333..., result is double because numerator is double
    std::cout << exp;

    return 0;
}
