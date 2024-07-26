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
        int n, k;
        cin >> n >> k;
        vector<vector<int>> grid(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < n; j++)
                grid[i][j] = s[j] - '0';
        }
        int m = n / k;
        vector<vector<int>> ans(m, vector<int>(m));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ans[i][j] = grid[(i + 1) * k - 1][(j + 1) * k - 1];
                // cout << grid[(i + 1) * k - 1][(j + 1) * k - 1] << endl;
                cout << ans[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
}