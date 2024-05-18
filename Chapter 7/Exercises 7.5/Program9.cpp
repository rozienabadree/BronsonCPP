#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y;

    char label[] = "                      y axis";
    char axis[] = "+---------------------------------------------------->";
    char line[] = "|                                                     ";

    cout << label << endl;
    cout << axis << endl;
    for (x = 1; x <= 15; x++)
    {
        y = pow((x - 8), 2.0) + 3;
        line[y] = '*';        // set character to an asterisk
        cout << line << endl; // output the line
        line[y] = ' ';        // reset character to a blank
    }

    return 0;
}