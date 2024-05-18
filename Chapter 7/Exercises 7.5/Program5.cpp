#include <iostream>
using namespace std;

void deleteNum(int[], int); // function prototype

int main()
{
    const int MAXNUM = 100;

    int id[MAXNUM] = {109, 122, 136, 144, 157, 162, 178, 185, 192, 9999};
    int number, i;

    cout << "\nEnter the number be deleted: ";
    cin >> number;

    deleteNum(id, number);

    cout << "\nThe updated list is: ";
    i = 0;
    while (id[i] != 9999)
    {
        cout << " " << id[i];
        i++;
    }
    cout << endl;

    return 0;
}

void deleteNum(int idcode[], int number)
{
    int i;

    // find correct position to insert the new code
    i = 0;
    while (idcode[i] < number)
        i++;
    if (idcode[i] == number)
    {
        while (idcode[i] != 9999)
        {
            idcode[i] = idcode[i+1];
            i++;
        }
        // find the end of the list
        if (idcode[i] == 9999)
            idcode[i] = idcode[i+1];
    }

    return;
}