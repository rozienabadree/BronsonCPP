#include <iostream>
using namespace std;

const int MAXELS = 5;
int findMax(int[MAXELS]); // function prototype

int main()
{
    int nums[MAXELS] = {2, 18, 1, 27, 16};
    cout << "The minimum value is " << findMax(nums) << endl;

    return 0;
}

// Find the minimum value
int findMax(int vals[MAXELS])
{
    int i, min = vals[0];
    for (i = 1; i < MAXELS; i++)
        if (vals[i] < min)
            min = vals[i];

    return min;
}