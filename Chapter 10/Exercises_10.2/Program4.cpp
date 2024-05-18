#include <iostream>
using namespace std;

int main()
{
    const int ARRAYSIZE = 7;

    double rates[ARRAYSIZE] = {12.9, 18.6, 11.4, 13.7, 9.5, 15.2, 17.6};
    int i;

    for (i = 0; i < ARRAYSIZE; i++)
    {
        cout << "\nElement " << i << " is " << *(rates + i);
    }

    return 0;
}