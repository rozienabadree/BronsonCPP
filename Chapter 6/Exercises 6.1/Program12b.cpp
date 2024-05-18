#include <iostream>
using namespace std;

template <class T>
void display(T input)
{
    cout << "The value entered is " << input << endl;

    return;
}

int main()
{
    char x = 'R';
    int y = 5;
    double z = 3.1419;

    display(x);
    display(y);
    display(z);

    return 0;
}