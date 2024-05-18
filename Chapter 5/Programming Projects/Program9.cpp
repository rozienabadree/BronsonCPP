#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    char start, end;
    int ch;

    cout << "Enter the starting character: ";
    cin >> start;
    do
    {
        cout << "Enter the ending character: ";
        cin >> end;
        if (start > end)
            cout << "The ending character must come after the starting character!" << endl;
    } while (start > end);

    cout << "\nDECIMAL     OCTAL     HEXADECIMAL" << endl;
    cout << "---------------------------------" << endl;

    for (ch = start; ch <= end; ch++)
    {
        cout << showbase << dec << ch << "          "
             << showbase << oct << ch << "       "
             << showbase << hex << ch << endl;
    }

    return 0;
}
