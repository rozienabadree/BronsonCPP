#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double AVERAGE = 2.0;
    double t, probability;

    cout << " LESS THAN     PROBABILITY \n"
         << "(in minutes)     \n"
         << "------------   ------------\n";

    for (t = 1.0; t <= 10.0; t++)
    {
        probability = 1.0 - exp(-t / AVERAGE);
        cout << setw(3) << t << "             "
             << probability << endl;
    }

    return 0;
}
