#include <iostream>
using namespace std;

int main()
{
    const int ROWS = 2;
    const int COLS = 3;
    int i, j;
    int first[ROWS][COLS] = {16, 18, 23, 54, 91, 11};
    int second[ROWS][COLS] = {24, 52, 77, 16, 19, 59};
    int element[ROWS][COLS];

    for (i = 0; i < ROWS; ++i)
    {
        for (j = 0; j < COLS; ++j)
        {
            element[i][j] = first[i][j] + second[i][j];
            cout << element[i][j] << "  ";
        }
        cout << endl; // to print each row on a new line
    }

    return 0;
}