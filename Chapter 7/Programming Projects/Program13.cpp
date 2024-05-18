#include <iostream>
using namespace std;

const int ROWS = 5;
const int COLS = 6;

int main()
{
    void grade(char[ROWS][COLS], int[]);

    int i;
    char tests[ROWS][COLS] = {'T', 'T', 'T', 'F', 'F', 'T',
                              'F', 'T', 'T', 'T', 'F', 'T',
                              'T', 'T', 'F', 'F', 'F', 'F',
                              'T', 'T', 'F', 'F', 'F', 'T',
                              'T', 'T', 'T', 'F', 'F', 'F'};
    int grades[COLS];

    grade(tests, grades);

    for (i = 0; i < COLS; i++)
    {
        cout << "Test " << i + 1 << ": " << grades[i] << endl;
    }

    return 0;
}

void grade(char tests[ROWS][COLS], int grades[])
{
    int tot, i, j;
    char answers[] = {'T', 'T', 'F', 'F', 'T'};

    for (i = 0; i < COLS; i++)
    {
        tot = 0;
        for (j = 0; j < ROWS; j++)
        {
            if (tests[j][i] == answers[j])
                tot = tot + 5;
        }
        grades[i] = tot;
    }

    return;
}