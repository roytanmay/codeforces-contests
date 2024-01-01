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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            auto it = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            ans = ((ans % mod) * ((n - it - i) % mod)) % mod;
        }
        cout << ans << endl;
        cout << endl;
    }
}