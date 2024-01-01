#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int MAXN = 10000001;
int spf[10000001];
bool prime[10000001];

void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

void sieve()
{
    memset(spf, 1, sizeof(spf));

    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)
        spf[i] = i;

    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;

    for (int i = 3; i * i < MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j < MAXN; j += i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}

signed main()
{
    sieve();
    SieveOfEratosthenes(10000001);

    int t = 1;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int a = -1, b = -1;
        for (int i = l; i <= r; i++)
        {
            if (i <= 3)
                continue;
            if (i % 2 == 0)
            {
                a = 2;
                b = i - 2;
                if (a + b >= l && a + b <= r)
                    break;
            }
            else if (!prime[i] && spf[i] > 1)
            {
                a = spf[i];
                b = i - spf[i];
                if (a + b >= l && a + b <= r)
                    break;
            }
        }

        // cout << spf[11] << endl;
        if (a + b >= l && a + b <= r)
            cout << a << " " << b << endl;
        else
            cout << "-1" << endl;
        cout << endl;
    }
}