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
        map<vector<int>, int> mp;
        int ans = 0;
        for (int i = 0; i <= n - 3; i++)
        {
            vector<int> v1 = {a[i], a[i + 1], 0}, v2 = {a[i], 0, a[i + 2]}, v3 = {0, a[i + 1], a[i + 2]}, v4 = {a[i], a[i + 1], a[i + 2]};
            int c = mp[v4];
            ans += (mp[v1] + mp[v2] + mp[v3] - 3 * c);
            mp[v1]++;
            mp[v2]++;
            mp[v3]++;
            mp[v4]++;
        }
        cout << ans << endl;
    }
}