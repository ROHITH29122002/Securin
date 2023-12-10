#include <bits/stdc++.h>
using namespace std;

int main()
{
    int faces_on_die = 6;

    int total_combinations = faces_on_die * faces_on_die;

    int sum_distribution[11] = {0};

    for (int die_a = 1; die_a <= faces_on_die; ++die_a)
    {
        for (int die_b = 1; die_b <= faces_on_die; ++die_b)
        {
            int sum = die_a + die_b;
            sum_distribution[sum - 2]++;
        }
    }

    cout << fixed << setprecision(4);

    for (int i = 2; i <= 12; ++i)
    {
        double probability = static_cast<double>(sum_distribution[i - 2]) / total_combinations;
        cout << "Sum of " << i << ": " << sum_distribution[i - 2] << " ways, Probability: " << probability << '\n';
    }

    return 0;
}
