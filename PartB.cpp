#include <bits/stdc++.h>
using namespace std;

vector<int> dieA = {1, 2, 3, 4, 0, 0};
vector<int> dieB = {1, 3, 4, 5, 6, 0};

unordered_map<int, int> target = {
    {2, 1},
    {3, 2},
    {4, 3},
    {5, 4},
    {6, 5},
    {7, 6},
    {8, 5},
    {9, 4},
    {10, 3},
    {11, 2},
    {12, 1}};

bool validateCurCombination()
{
    unordered_map<int, int> cur;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cur[dieA[i] + dieB[j]]++;
        }
    }
    return target == cur;
}

void printDie()
{
    cout << "Die A is : ";
    for (int i = 0; i < 6; i++)
    {
        cout << dieA[i] << " ";
    }
    cout << endl;

    cout << "Die B is : ";
    for (int i = 0; i < 6; i++)
    {
        cout << dieB[i] << " ";
    }
    cout << endl;
}

void backtrack(int curA, int curB)
{
    if (curA == 6 && curB == 6)
    {
        if (validateCurCombination())
        {
            printDie();
            exit(1);
        }
        return;
    }

    for (int k = 0; k < 4; k++)
    {
        int curAHit = k + 1;
        for (int l = 0; l < 11; l++)
        {
            int curBHit = l + 1;
            dieA[curA] = curAHit;
            dieB[curB] = curBHit;
            backtrack(curA + 1, curB + 1);
        }
    }
}

int main()
{
    backtrack(4, 4);
    return 0;
}