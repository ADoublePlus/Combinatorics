#include <iostream>

#include "Permutation.h"

using namespace std;

int main(int argc, const char* argv[])
{
    vector<int> perm = { 3, 1, 5, 2, 4 };
    vector<int> inv = get_inversion_sequence(perm);
    bool valid = is_valid_inversion_sequence(inv);

    if (!valid)
    {
        cout << "Not a valid inversion sequence";
    }
    else 
    {
        vector<int> gen_perm = get_permutation_from_inversion(inv);

        if (gen_perm.size() != perm.size())
        {
            cout << "Generated permutation not equal in length to the original" << endl;
        }
        else 
        {
            for (int i = 0; i < int(perm.size()); i++)
            {
                if (gen_perm[i] != perm[i])
                {
                    cout << "Generated permutation not equal to the original" << endl;

                    return 0;
                }
            }
        }
    }

    if (5 != count_permutations_with_inversion_disorder(4, 2))
    {
        cout << "Count permutations with inversion disorder not correct" << endl;

        return 0;
    }

    cout << "Works fine" << endl;

    return 0;
}