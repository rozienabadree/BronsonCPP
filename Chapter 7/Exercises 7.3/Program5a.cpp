#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int ROWS = 4;
    const int COLS = 5;

    int i, j, max;
    int vals[ROWS][COLS] = {16, 22, 99, 4, 18, -258, 4, 101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16, 3};
    max = vals[0][0];

    for (i = 0; i < ROWS; ++i)
    {
        for (j = 0; j < COLS; ++j)
        {
            cout << setw(4) << vals[i][j] << "   ";
            if (vals[i][j] > max)
                max = vals[i][j];
        }
        cout << endl; // to print each row on a new line
    }
    cout << "\nThe maximum value is: " << max << endl;

    return 0;
}