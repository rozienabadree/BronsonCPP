#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    float x1, x2, y1, y2, distance;

    cout << "Enter the x and y coordinates in the following order: x1, y1, x2, y2: ";
    cin >> x1 >> y1 >> x2 >> y2;

    distance = sqrt(pow((x2 - x1),2) + pow((y2 - y1), 2));
    cout << "Distance: " << distance << endl;

    return 0;
}