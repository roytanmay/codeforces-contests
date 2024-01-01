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
        int n, k;
        cin >> n >> k;
        int ans = 1;
        while (k--)
            ans = ((ans % mod) * (n % mod)) % mod;
        cout << ans << endl;
        cout << endl;
    }
}