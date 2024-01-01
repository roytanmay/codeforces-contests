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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i] - i]++;
        }
        int ans = 0;
        for (auto i : mp)
        {
            if (i.second > 1)
            {
                ans += ((i.second * (i.second - 1)) / 2);
            }
        }
        cout << ans << endl;
        cout << endl;
    }
}