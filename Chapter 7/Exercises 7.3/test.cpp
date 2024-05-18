#include <iostream>
using namespace std;

int main()
{
    const int ROWS = 4;
    const int COLS = 5;

    int i, j, k, indexRow, indexCol;
    int max = 0;
    int vals[ROWS][COLS] = {16, 22, 99, 4, 18, 258, 4, 101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16, 3};
    int sort[ROWS * COLS];

    cout << "The values sorted: " << endl;

    for (k = 0; k < (ROWS * COLS); k++)
    {
        for (i = 0; i < ROWS; i++)
        {
            for (j = 0; j < COLS; j++)
            {
                if (vals[i][j] > max)
                {
                    max = vals[i][j];
                    indexRow = i;
                    indexCol = j;
                }
            }
        }
        sort[k] = max;
        cout << sort[k] << " ";
        max = 0;
        vals[indexRow][indexCol] = 0;
    }

    return 0;
}