#include <iostream>
using namespace std;

int main()
{
    float terms, twoTerms, threeTerms, fourTerms;

    terms = 1;
    twoTerms = 4 * (terms - 1/3);
    threeTerms = 4 * (twoTerms + 1/5);
    fourTerms = 4 * (threeTerms - 1/7);

    cout << "The second, third, and fourth terms of the PI series are: " << twoTerms << " " << threeTerms << " and " << fourTerms;

    return 0;
}