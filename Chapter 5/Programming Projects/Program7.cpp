#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int remainder;
    double i;
    int j, count;
    double sq;

    cout << "The prime numbers from 1 to 100 are: \n1 " << endl;

    for (i = 2.0; i <= 100.0; i++)
    {
        count = 0;

        for (j = 2; j <= sqrt(i); j++)
        {
            remainder = int(i) % j;

            if (remainder == 0)
                count++;
        }

        if (count == 0) // then the number is prime
            cout << i << endl;
    }

    return 0;
}