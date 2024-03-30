#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

void fun(int &a, int &b, int &l, int ax, int by, map<int, int> &mp, map<pair<int, int>, int> &dp)
{
    if (ax * by > l || l % (ax * by) > 0)
        return;
    if (dp.count({ax, by}))
        return;
    dp[{ax, by}]++;
    mp[l / (ax * by)]++;
    fun(a, b, l, ax * a, by, mp, dp);
    fun(a, b, l, ax, by * b, mp, dp);
    fun(a, b, l, ax * a, by * b, mp, dp);
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int a, b, l;
        cin >> a >> b >> l;
        map<int, int> mp;
        map<pair<int, int>, int> dp;
        fun(a, b, l, 1, 1, mp, dp);
        int ans = mp.size();
        cout << ans << endl;
    }
}