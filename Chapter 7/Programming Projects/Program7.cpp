#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    const int NUMEL = 1000;
    int nums[NUMEL];
    int i, cnt = 0;

    srand(time(NULL));

    for (i = 0; i < NUMEL; i++)
    {
        nums[i] = 1 + rand() % 100;
    }

    for (i = 0; i < NUMEL; i++)
    {
        if (nums[i] > 50)
            cnt++;
    }

    cout << "There are " << NUMEL - cnt << " values between 1 and 50" << endl;
    cout << "And " << cnt << " values greater than 50" << endl;

    return 0;
}