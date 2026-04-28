#include <iostream>
#include <cmath>
#include <iomanip>  

using namespace std;

double calc_area(double r)
{
    return M_PI * pow(r, 2);
}

int main()
{
    double radius;
    cin >> radius;

    double area = calc_area(radius);

    cout << fixed << setprecision(2) << area << endl;

    return 0;
}
