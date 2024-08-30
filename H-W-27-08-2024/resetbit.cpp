#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    a &= ~(1 << b);
    cout << a << endl;
    return 0;
}
