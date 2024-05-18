#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

const int NUMdots = 2;

int main()
{
    int dots, total = 0;
    int seed, i;

    srand(time(NULL));

    for (i = 0; i < NUMdots; ++i)
    {
        seed = double(rand()) / RAND_MAX;
        dots = (int)(6.0 * seed + 1.0);

        total = total + dots;
    }

    cout << "The total is: " << total << endl;

    if (total == 7 || total == 11)
        cout << "YOU WIN!!" << endl;
    else
        cout << "YOU LOSE!" << endl;

    return 0;
}