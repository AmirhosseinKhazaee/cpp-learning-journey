#include <iostream>
#include <random>

using namespace std;

int main()
{

    mt19937 gen(random_device{}());
    uniform_int_distribution<int> dist(1, 6);

    int dice = dist(gen);

    cout << dice << endl;
    return 0;
}