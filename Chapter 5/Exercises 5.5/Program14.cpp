#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    const int MAXLETTERS = 1000;

    int count, i = 0, let;
    char letters[MAXLETTERS];
    double seed;

    srand(time(NULL));

    while (true)
    { //
        seed = double(rand()) / RAND_MAX;
        let = (int)(26.0 * seed + 1.0);
        letters[i] = char('a' + let - 1); // convert to a letter
        if (letters[i - 1] == 'a' && letters[i] == 't' || letters[i - 1] == 'i' && letters[i] == 's' || letters[i - 1] == 'h' && letters[i] == 'e' || letters[i - 1] == 'w' && letters[i] == 'e' || letters[i - 1] == 'u' && letters[i] == 'p' || letters[i - 1] == 'o' && letters[i] == 'n')
        {
            break;
        }

        i++;
    }

    count = i + 1;

    cout << "It took " << count << " letters to produce a word" << endl;
    cout << "The letters entered are: " << endl;

    for (i = 0; i < count; i++)
        cout << letters[i] << ' ';

    return 0;
}