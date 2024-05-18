#include <iostream>
using namespace std;

void selectionSort(int[], int);  // function prototype

int main()
{
    int MAX = 5, i, grade, count;
    int array[MAX];

    for (i = 0; i < MAX; i++)
    {
        cout << "Please enter a grade: ";
        cin >> grade;

        if (grade < 0)
            break;
        else
            array[i] = grade;
    }

    count = i;

    selectionSort(array, MAX);
    
    cout << "The elements in reverse order are: ";
    for (i = count - 1; i >= 0; i--)
    {
        cout << array[i] << " ";
    }

    return 0;
}

void selectionSort(int array[], int size)        // find the minimum element
{
    int i, j, min, minidx, temp;

    for (i = 0; i < (size - 1); i++)
    {
        min = array[i];
        minidx = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
                minidx = j;
            }
        }
        if (min < array[i])
        {
            temp = array[i];
            array[i] = min;
            array[minidx] = temp;
        }
    }
}