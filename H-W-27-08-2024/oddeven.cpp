#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    string result = (num & 1) == 0 ? "even" : "odd";
    cout << result << endl;
    return 0;
}
