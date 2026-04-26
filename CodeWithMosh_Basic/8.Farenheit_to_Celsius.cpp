#include <iostream>

using namespace std;

double farenheit_to_celsius(int farenheit)
{
    double celsius = (farenheit -32 ) * (5.0/9);
    return  celsius;
}

int main()
{
    double farenheit;
    cin >> farenheit;
    double celsius = farenheit_to_celsius(farenheit);
    cout << celsius;
    return 0;
}