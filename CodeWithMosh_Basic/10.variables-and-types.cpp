#include <iostream>

int main()
{
    // Integer types
    int number{};          // value-initialized to 0
    int rand_num = 0;      // uninitialized in your version; now explicitly set

    // Floating-point types
    float  f_num = 11.22f;    // 'f' suffix → float literal
    double d_num = 12.3214;   // default floating literal → double

    // Long integer
    long file_size = 90000L;  // 'L' suffix → long literal (uppercase is clearer)

    // Character
    char character = 'a';     // single character in single quotes

    // Boolean
    bool is_valid = false;    // true / false

    // Type deduction with auto
    auto auto_number = 123.21f; // deduced as float because of 'f' suffix

    return 0;
}
