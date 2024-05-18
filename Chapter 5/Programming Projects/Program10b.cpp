#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    const int DAYS = 64;
    int i;
    int one_mill = 0;
    float amount = 0.01;
    float total = 0.0;

    cout << " Day            Amount\n"
         << "------        ----------\n";

    for (i = 1; i <= DAYS; i++)
    {
        cout << setw(3) << fixed << setprecision(2);
        cout << i << "              " << amount << endl;
        total = total + amount;
        if (total >= 1000000 && one_mill == 0)
            {
                one_mill = i;
            }
        amount *= 2;
    }
    cout << "The king will have paid the beggar one million dollars on day " << one_mill;

    return 0;
}