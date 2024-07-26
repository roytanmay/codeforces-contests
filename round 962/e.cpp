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
        string s;
        cin >> s;
        int n = s.size();
        int ans = 0, c0 = 0, c1 = 0;
        map<int, int> mp;
        mp[0]++;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                c0++;
            else
                c1++;
            int d = c0 - c1;
            if (mp.count(d))
            {
                ans = (ans + (mp[d] * (n - i)) % mod) % mod;
                // cout << mp[d] * (n - i) << endl;
            }
            mp[d] += (i + 2);
        }
        cout << ans << endl;
        cout << endl;
    }
}