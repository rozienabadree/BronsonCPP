#include <iostream> // this line can be placed second instead of first
#include <cmath>    // this line can be placed first instead of second
using namespace std;

int main()
{
    const float GRAV = 32.2;
    int height;
    double time;

    height = 800;
    time = sqrt(2 * height / GRAV);
    cout << "It will take " << time << " seconds to fall "
         << height << " feet.\n";

    return 0;
}