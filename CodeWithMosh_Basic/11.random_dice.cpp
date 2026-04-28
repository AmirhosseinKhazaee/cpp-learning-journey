#include <iostream>
#include <cstdlib>
#include <ctime>
#include <utility>

using namespace std;
// professional version

// pair<int, int> roll_dice()
// {
//     int minValue = 1;
//     int maxValue = 6;

//     int dice1 = (rand() % (maxValue - minValue + 1)) + minValue;
//     int dice2 = (rand() % (maxValue - minValue + 1)) + minValue;

//     return {dice1, dice2};
// }

// int main()
// {
//     srand(time(nullptr));   // seed once

//     pair<int, int> result = roll_dice();

//     cout << result.first << " , " << result.second << endl;
// }

int main()
{
    srand(time(nullptr)); // seed once

    int minValue = 1;
    int maxValue = 6;

    int first_dice = (rand() % (maxValue - minValue + 1)) + minValue;
    int second_dice = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << first_dice << " , " << second_dice << endl;
}