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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        unordered_map<double, int> mp;
        int ans = 0;
        for (auto i : a)
        {
            double temp = i - (double)log2((double)i);
            if (mp.count(temp))
                ans += mp[temp];
            mp[temp]++;
        }
        cout << ans << endl;
    }
}