#include <iostream>
using namespace std;

void adlet(char[], char); // function prototype

int main()
{
    const int MAXLET = 100;
    char newlet;
    int i;
    char alphabet[MAXLET] = {'B', 'J', 'K', 'M', 'S', 'Z'};

    cout << "\nEnter the new letter: ";
    cin >> newlet;

    adlet(alphabet, newlet);

    cout << "\nThe updated list is:";
    i = 0;
    while (alphabet[i] != 'Z')
    {
        cout << " " << alphabet[i];
        i++;
    }
    cout << " " << alphabet[i]; // to get the Z
    cout << endl;

    return 0;
}

void adlet(char alpha[], char newlet)
{
    int i, newpos, endpos;

    // find correct position to insert the new letter
    i = 0;
    while (alpha[i] < newlet)
        i++;
    if (alpha[i] == newlet)
        cout << "\nThis letter is already in the list";
    else
    {
        newpos = i; // found the position for the new letter

        // find the end of the list
        while (alpha[i] != 'Z')
            i++;
        endpos = i;

        // move letters over one position
        for (i = endpos; i >= newpos; --i)
            alpha[i + 1] = alpha[i];

        // insert the new letter
        alpha[newpos] = newlet;
    }

    return;
}