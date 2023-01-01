#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long M, N;
        cin >> M >> N;
        long prime[N + 1]={0};
        //memset(prime, true, sizeof(prime));
        for (long p = 2; p * p <= N; p++)
        {
            // If prime[p] is not changed, then it is a prime
            if (prime[p] == 0)
            {
                // Update all multiples of p greater than or
                // equal to the square of it numbers which are
                // multiple of p and are less than p^2 are
                // already been marked.
                for (long i = p * p; i <= N; i += p)
                    prime[i] = 1;
            }
        }

        for (long i = M; i <= N; i++)
        {
            if (i == 1)
            {
                continue;
            }
            if (prime[i]==0)
            {
                cout << i << endl;
            }
        }
        cout<<endl;
    }
}