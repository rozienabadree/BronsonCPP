#include <iostream>
using namespace std;

const int ROWS = 6;
const int COLS = 5;

int main()
{
    void grade(char[ROWS][COLS], int[]);

    int i;
    char tests[ROWS][COLS] = {'T', 'F', 'T', 'T', 'T',
                              'T', 'T', 'T', 'T', 'T',
                              'T', 'T', 'F', 'F', 'T',
                              'F', 'T', 'F', 'F', 'F',
                              'F', 'F', 'F', 'F', 'F',
                              'T', 'T', 'F', 'T', 'F'};
    int grades[ROWS];

    grade(tests, grades);

    for (i = 0; i < ROWS; i++)
    {
        cout << "Test " << i + 1 << ": " << grades[i] << endl;
    }
    
    return 0;
}

void grade(char tests[ROWS][COLS], int grades[])
{
    int tot, i, j;
    char answers[] = {'T', 'T', 'F', 'F', 'T'};

    for (i = 0; i < ROWS; i++)
    {
        tot = 0;
        for (j = 0; j < COLS; j++)
        {
            if (tests[i][j] == answers[j])
                tot = tot + 5;
        }
        grades[i] = tot;
    }

    return;
}