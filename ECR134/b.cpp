// #include <bits/stdc++.h>
// using namespace std;

// int mod = 1000000007;
// #define int long long
// #define pyes cout << "YES" << endl
// #define pno cout << "NO" << endl

// signed main()
// {
//     int t = 1;
//     cin >> t;

//     while (t--)
//     {
//         int n, m, x, y, d;
//         cin >> n >> m >> x >> y >> d;
//         if (n - x + m - y <= d)
//             cout << "-1" << endl;
//         else if ((y - 1 <= d || n - x <= d) && (x - 1 <= d || m - y <= d))
//             cout << "-1" << endl;
//         else
//             cout << n + m - 2 << endl;
//         cout << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int solve(vector<vector<int>> &dp, int i, int j, int &n, int &m, int &x, int &y, int &d, int p)
{
    if (i < 1 || j < 1 || i > n || j > m || (abs(i - x) + abs(j - y)) <= d)
        return 1e9;
    if (i == n && j == m)
        return p;
    if (dp[i][j] != -1)
        return dp[i][j];
    int r = solve(dp, i, j + 1, n, m, x, y, d, p + 1);
    int l = solve(dp, i, j - 1, n, m, x, y, d, p + 1);
    int dw = solve(dp, i + 1, j, n, m, x, y, d, p + 1);
    int u = solve(dp, i - 1, j, n, m, x, y, d, p + 1);
    return dp[i][j] = min(r, min(l, min(dw, u)));
}

signed main()
{
    int t = 1;
    // cin >> t;

    while (t--)
    {
        int n, m, x, y, d;
        cin >> n >> m >> x >> y >> d;
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        int res = solve(dp, 1, 1, n, m, x, y, d, 0);
        if (res == 1e9)
            cout << "-1" << endl;
        else
            cout << res << endl;
        cout << endl;
    }
}