#include <iostream>
using namespace std;

int main()
{
    float length, width, depth, perimeter, volume, undergroundSA, LW, LPLUSW;

    cout << "Enter the length, width, and depth: ";
    cin >> length >> width >> depth;

    LW = length * width;
    LPLUSW = length + width;

    perimeter = 2 * LPLUSW;
    volume = LW * depth;
    undergroundSA = perimeter * depth + LW;

    cout << "The perimeter, volume, and underground surface area are: " << perimeter << " " << volume << " " << undergroundSA;

    return 0;
}