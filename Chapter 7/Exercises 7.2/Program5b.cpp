#include <iostream>
using namespace std;

int main()
{
    const int NUMDISPLAY = 14;
    char strtest[] = "This is a test";
    int i;

    for (i = 10; i < NUMDISPLAY; i++)
        cout << strtest[i];

    return 0;
}