#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int Count = 0;
    while (a)
    {
        Count += a & 1;
        a >>= 1;
    }
    cout << Count << endl;
    return 0;
}
