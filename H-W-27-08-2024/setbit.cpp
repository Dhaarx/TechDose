#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, bitPosition;
    cin >> a >> bitPosition;
    a |= (1 << bitPosition);
    cout << a << endl;
    return 0;
}
