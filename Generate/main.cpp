#include <iostream>

#include "Permutation.h"

using namespace std;

int main(int argc, const char* argv[])
{
    auto permutations = generate_permutations(9);

    cout << "Got " << permutations.size() << " Permutations\n";

    for (vector<int>& v : permutations)
    {
        cout << "{ ";

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];

            if (i != v.size() - 1)
            {
                cout << ", ";
            }
        }

        cout << " }\n";
    } 

    return 0;
}