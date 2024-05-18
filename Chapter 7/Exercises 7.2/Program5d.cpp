#include <iostream>
using namespace std;

int main()
{
    char strtest[] = "This is a test";
    int i = 0;

    // stop the loop when the escape sequence is detected
    while (strtest[i] != '\0')
    {
        cout << strtest[i];
        i++;
    }

    return 0;
}