#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

bool subsetSumToK(int n, int k, vector<int> &arr)
{
    vector<vector<bool>> dp(n + 1, vector<bool>(k + 1, false));
    for (int i = 0; i < n; i++)
        dp[i][0] = true;
    dp[0][arr[0]] = true;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j - arr[i] >= 0)
                dp[i][j] = dp[i][j] || dp[i - 1][j - arr[i]];
        }
    }
    return dp[n - 1][k];
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> c(n);
        for (int i = 0; i < n; i++)
            cin >> c[i];
        if (n == 1)
        {
            if (c[0] == 1)
                pyes;
            else
                pno;
        }
        else
        {
            sort(c.begin(), c.end());
            if (c[0] != 1 || c[1] != 1)
                pno;
            else
            {
                bool f = true;
                for (int i = 2; i < n; i++)
                {
                    if (!subsetSumToK(i, c[i], c))
                    {
                        f = false;
                        break;
                    }
                }
                if (f)
                    pyes;
                else
                    pno;
            }
        }
        cout << endl;
    }
}