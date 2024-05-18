#include <iostream>
using namespace std;

void insert(int[], int); // function prototype

int main()
{
    const int MAXNUM = 100;

    int id[MAXNUM] = {109, 122, 136, 144, 157, 162, 178, 185, 192, 9999};
    int newcode, i;

    cout << "\nEnter the new identification code: ";
    cin >> newcode;

    insert(id, newcode);

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

void insert(int idcode[], int newcode)
{
    int i, newpos, trlpos;

    // find correct position to insert the new code
    i = 0;
    while (idcode[i] < newcode)
        i++;
    if (idcode[i] == newcode)
        cout << "\nThis identification code is already in the list";
    else
    {
        newpos = i; // found the position for the new code

        // find the end of the list
        while (idcode[i] != 9999)
            i++;
        trlpos = i;

        // move idcodes over one position
        for (i = trlpos; i >= newpos; --i)
            idcode[i + 1] = idcode[i];

        // insert the new code
        idcode[newpos] = newcode;
    }

    return;
}