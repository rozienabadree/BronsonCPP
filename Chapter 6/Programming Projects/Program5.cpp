#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int readOneChar();

    int ch;

    ch = readOneChar();

    cout << "\nThe key entered was: " << ch << endl;

    return 0;
}

int readOneChar()
{
    int ch, key;

    cout << "Press a key and then press ENTER: ";
    ch = getch();

    if (ch != 13)
    {
        do
        {
            key = getch();
        } while (key != 13);
    }

    return ch;
}