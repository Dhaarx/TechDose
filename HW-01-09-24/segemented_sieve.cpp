#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void simpleSieve(int limit, vector<int> &primes)
{
    vector<bool> isPrime(limit + 1, true);

    for (int p = 2; p * p <= limit; ++p)
    {
        if (isPrime[p])
        {
            for (int i = p * p; i <= limit; i += p)
            {
                isPrime[i] = false;
            }
        }
    }

    for (int p = 2; p <= limit; ++p)
    {
        if (isPrime[p])
        {
            primes.push_back(p);
        }
    }
}

void segmentedSieve(long long L, long long R)
{
    int limit = sqrt(R);
    vector<int> primes;
    simpleSieve(limit, primes);

    vector<bool> isPrime(R - L + 1, true);

    for (int i = 0; i < primes.size(); i++)
    {
        int currentPrime = primes[i];
        long long base = (L / currentPrime) * currentPrime;
        if (base < L)
            base += currentPrime;
        if (base == currentPrime)
            base += currentPrime;
        for (long long j = base; j <= R; j += currentPrime)
        {
            isPrime[j - L] = false;
        }
    }
    for (long long i = L; i <= R; i++)
    {
        if (isPrime[i - L] && i > 1)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    long long L = 10;
    long long R = 50;
    cout << "Primes in the range [" << L << ", " << R << "] are: ";
    segmentedSieve(L, R);
    return 0;
}
