#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int N = 3;

    int x, i, j;
    int row, col, newRow, newCol;
    int element[N][N];

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            element[i][j] = 0;

    row = 0;
    col = (N + 1) / 2 - 1;
    x = 1;

    element[row][col] = x;

    for (x = (x + 1); x <= N * N; x++)
    {
        newRow = row - 1;
        newCol = col + 1;

        if (newRow == -1)
            newRow = N - 1;

        if (newCol == N)
            newCol = 0;

        if (element[newRow][newCol] != 0)
        {
            newRow = row + 1;
            newCol = col;
        }

        element[newRow][newCol] = x;
        row = newRow;
        col = newCol;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << setiosflags(ios::left) << setw(5) << element[i][j];
        }
        cout << endl;
    }

    return 0;
}