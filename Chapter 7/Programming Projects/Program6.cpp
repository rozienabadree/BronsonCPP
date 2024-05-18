#include <iostream>
using namespace std;

void split(int[], int, int[], int[], int&, int&);   // function prototype
void display(int[], int[], int&, int&); // function prototype

int main()
{
    const int SIZE = 20;
    int array[SIZE] = {-310, 325, -381, 51, -423, 140, -275, -244, -93, -248, 453, -34, -107, 182, 151, 26, -242, 136, -409, -196};
    int positive[SIZE], negative[SIZE], countPos, countNeg;

    split(array, SIZE, positive, negative, countPos, countNeg);
    display(positive, negative, countPos, countNeg);

    return 0;
}

void split(int array[], int size, int positive[], int negative[], int& countPos, int& countNeg)
{
    countPos = 0;
    countNeg = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        if (array[i] >= 0)
        {
            positive[countPos] = array[i];
            countPos++;
        }
        else
        {
            negative[countNeg] = array[i];
            countNeg++;
        }
    }

    return;
}

void display(int positive[], int negative[], int& countPos, int& countNeg)
{
    int i;

    cout << "The positive array is: ";
    for (i = 0; i < countPos; i++)
    {
        cout << positive[i] << " ";
    }
    cout << endl;

    cout << "The negative array is: ";
    for (i = 0; i < countNeg; i++)
    {
        cout << negative[i] << " ";
    }
    cout << endl;

    return;
}