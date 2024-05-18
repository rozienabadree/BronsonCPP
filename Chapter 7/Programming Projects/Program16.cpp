#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int N = 11;
    int element[N][N];
    int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 1; j < N - i; j++)
            cout << setw(2) << " ";

        for (j = 0; j <= i; j++)
        {
            if (j == 0)
                element[i][j] = 1;
            else
            {
                element[i][j] = element[i - 1][j] + element[i - 1][j - 1];
            }

            cout << setw(4) << element[i][j];
        }

        cout << endl;
    }

    return 0;
}
