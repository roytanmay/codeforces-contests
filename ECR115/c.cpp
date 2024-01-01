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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        double mean = (double)sum / n;
        int ans = 0;
        unordered_map<double, int> mp;
        for (auto i : a)
        {
            if (mp[2 * mean - i] > 0)
                ans += mp[2 * mean - i];
            mp[i]++;
        }
        cout << ans << endl;
        cout << endl;
    }
}