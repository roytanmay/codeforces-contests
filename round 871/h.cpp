#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int setBits(int num)
{
    int c = 0;
    for (int i = 0; i <= 6; i++)
    {
        if ((1 << i) & num)
            c++;
    }
    return c;
}

int solve(vector<int> &a, vector<vector<int>> &dp, int &k, int &n, int i, int t)
{
    if (i == n)
        return setBits(t) == k;
    if (dp[i][t + 1] != -1)
        return dp[i][t + 1];
    return dp[i][t + 1] = (solve(a, dp, k, n, i + 1, t) % mod + solve(a, dp, k, n, i + 1, t & a[i]) % mod) % mod;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<vector<int>> dp(n + 1, vector<int>(65, -1));
        cout << solve(a, dp, k, n, 0, -1) << endl;
        cout << endl;
    }
}