#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int part = n / m;
        int alice_same = (n / m) + ((n % m) > 0);
        if (k >= n - alice_same)
            pno;
        else
            pyes;
        // cout << endl;
    }
}