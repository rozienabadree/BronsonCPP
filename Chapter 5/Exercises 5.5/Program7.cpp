#include <iostream>
using namespace std;

int main()
{
    int count = 0, i = 0;
    cout << "The first 20 whole numbers divisible by 3 are:\n";

    while (count < 20)
    {
        i++;
        if (i % 3 == 0)
        {
            count++;
            cout << i << " ";
        }
    }

    return 0;
}