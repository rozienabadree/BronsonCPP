#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

const int NUMDIE = 2;

int main()
{
    int die, i, total = 0;

    srand(time(NULL));

    for (i = 0; i < NUMDIE; i++)
    {
        die = 1 + (rand() % 6);
        cout << die << endl;
        total = total + die;
    }

    cout << "The total is: " << total << endl;

    if (total == 7 || total == 11)
        cout << "YOU WIN!!" << endl;
    else
        cout << "YOU LOSE!" << endl;

    return 0;
}