#include <iostream>
using namespace std;

int main()
{
    cout << "NUMBER     NUM/3\n"
         << "-------   --------" << endl;
    
    for (int i = 33; i >= 3; i -= 3)
        {
            cout << i << "          " << i/3 << endl;
        }
    
    return 0;
}