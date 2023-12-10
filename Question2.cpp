#include <bits/stdc++.h>
using namespace std;

int main()
{
    int faces_on_die = 6;

    int sum_matrix[6][6] = {0};

    for (int die_a = 1; die_a <= faces_on_die; ++die_a)
    {
        for (int die_b = 1; die_b <= faces_on_die; ++die_b)
        {
            int sum = die_a + die_b;
            sum_matrix[die_a - 1][die_b - 1] = sum;
        }
    }

    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j < 6; ++j)
        {
            cout << sum_matrix[i][j] << "   ";
        }
        cout << endl;
    }

    return 0;
}
