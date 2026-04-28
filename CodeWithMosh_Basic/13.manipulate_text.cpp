#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << left ;
    cout << setw(10) << "Course" << setw(10)<< "Student" << endl
         << setw(10) << "C++" << right << setw(10) << 100 << endl
         << setw(10) << "Javascript" << right << setw(10) << 50 << endl;
}