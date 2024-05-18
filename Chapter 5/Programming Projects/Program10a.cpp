#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    const int DAYS = 64;
    int i;
    float amount = 0.01;

    cout << " Day            Amount\n"
         << "------        ----------\n";

    

    for (i = 1; i <= DAYS; i++)
    {
        cout << setw(3) << fixed << setprecision(2);
        cout << i << "              " << amount << endl;
        amount *= 2;
    }

    return 0;
}