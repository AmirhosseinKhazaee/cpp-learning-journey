#include <iostream>
#include <iomanip>

using namespace std;

void printer(const char* mode, float f, double d, int i)
{
    cout << "----------------------\n"
         << mode << ":\n"
         << "float   : " << f << '\n'
         << "double  : " << d << '\n'
         << "integer : " << i << "\n\n";
}

int main()
{
    float  f_number = 10.12312f;
    double d_number = 12.213;
    int    i_number = 12;

    printer("Default formatting", f_number, d_number, i_number);

    cout << fixed << setprecision(2);
    printer("Fixed (precision = 2)", f_number, d_number, i_number);

    cout << fixed << setprecision(3);
    printer("Fixed (precision = 3)", f_number, d_number, i_number);

    cout << "----------------------\n";
    return 0;
}
