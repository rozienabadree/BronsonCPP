#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int powerOfThree = 1;
    int count = 1;

    while (powerOfThree < 30000)
    {
        powerOfThree = 3 * powerOfThree;
        count++;
    }

    count--; // b/c this is increases after last calculation
    cout << "The smallest integer power of 3 that exceeds 30,000 is: "
         << count << endl;

    return 0;
}