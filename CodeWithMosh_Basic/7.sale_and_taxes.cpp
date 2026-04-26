#include <iostream>

using namespace std;

int main()
{
    int total_sales = 95000;

    double state_tax_percentage = 0.04;
    double country_tax_percentage = 0.02;

    double state_tax = total_sales * state_tax_percentage;
    double country_tax = total_sales * country_tax_percentage;

    double total_sales_after_tax = total_sales - (country_tax + state_tax);

    cout << "state tax : $" << state_tax << endl
         << "country tax : $" << country_tax << endl
         << "total sales after tax : $" << total_sales_after_tax << endl;

    return 0;
}
