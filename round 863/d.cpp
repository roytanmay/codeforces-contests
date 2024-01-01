#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int fib(int n, vector<int> &dp)
{
    if (n == 0)
        return dp[n] = 1;
    if (n == 1)
        return dp[n] = 1;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> dp(n + 2, -1);
        int w = fib(n + 1, dp), h = fib(n, dp);
        cout << w << " " << h << endl;
        cout << x << " " << y << endl;
        if ((y <= 2 || y >= w - fib(n, dp)) && (x == 1 || x == h))
            pyes;
        else
            pno;
        cout << endl;
    }
}