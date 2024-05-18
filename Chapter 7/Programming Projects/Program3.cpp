#include <iostream>
using namespace std;

int main()
{
    void showRev(int, int[]);

    const int SIZE = 5;
    int vals[] = {1, 2, 3, 4, 5};

    showRev(SIZE, vals);

    return 0;
}

void showRev(int numvals, int vals[])
{
    int i;

    for (i = (numvals - 1); i >= 0; i--)
        cout << vals[i] << " ";

    return;
}