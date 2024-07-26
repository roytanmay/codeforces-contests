#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

// int solve(int n, int &k, vector<int> &dp)
// {
//     if (n <= 1)
//         return 0;
//     if (k >= n)
//         return 1;
//     if (dp[n] != -1)
//         return dp[n];

//     int d = n / k, r = n % k;
//     if (r > 0)
//         d++;
//     d = max(d, k);
//     int sum = n, res = 1;

//     while (sum > 0)
//     {
//         if (sum > d)
//         {
//             res += solve(d, k, dp);
//             sum -= d;
//         }
//         else
//         {
//             res += solve(sum, k, dp);
//             sum = 0;
//         }
//     }

//     return dp[n] = res;
// }

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        // vector<int> dp(n + 1, -1);
        // int ans = solve(n, k, dp);
        // cout << ans << endl;

        if (n == 1)
            cout << "0" << endl;
        else if (n <= k)
            cout << "1" << endl;
        else
        {
            k--;
            int ans = 0;
            while (n > 1)
            {
                n -= k;
                ans++;
            }
            cout << ans << endl;
        }
    }
}