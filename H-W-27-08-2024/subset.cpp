#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {5, 6, 7};
    vector<vector<int>> subsets;
    int totalSubsets = 1 << a.size();
    for (int i = 0; i < totalSubsets; ++i)
    {
        vector<int> subset;
        for (int j = 0; j < a.size(); ++j)
        {
            if (i & (1 << j))
            {
                subset.push_back(a[j]);
            }
        }
        subsets.push_back(subset);
    }

    cout << '[';
    for (size_t i = 0; i < subsets.size(); ++i)
    {
        cout << '[';
        for (size_t j = 0; j < subsets[i].size(); ++j)
        {
            if (j > 0)
                cout << ',';
            cout << subsets[i][j];
        }
        cout << ']';
    }
    cout << ']' << endl;

    return 0;
}
