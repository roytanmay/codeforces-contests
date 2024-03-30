#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

void dfs(vector<vector<int>> &adj, vector<bool> &vis, int node, int &count)
{
    int c = 0;
    vis[node] = true;
    for (auto i : adj[node])
    {
        if (!vis[i])
        {
            c++;
            dfs(adj, vis, i, count);
        }
    }

    if (c > 1)
        count += (c * (c - 1)) / 2;
}

int fun(int i, vector<int> &dp)
{
    if (i == 1)
        return 1;
    if (dp[i] != -1)
        return dp[i];
    return dp[i] = i * fun(i - 1, dp);
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> vis(n + 1, false);
        int count = 0;

        for (int i = 1; i <= n; i++)
            dfs(adj, vis, i, count);

        int ans = pow(2, n);
        vector<int> dp(n + 1, -1);
        for (int i = n; i > 3; i--)
        {
            int temp = fun(n, dp) / (fun(i, dp) * fun(n - i, dp));
            ans -= temp;
            cout << temp << endl;
        }
        ans -= count;

        cout << ans << endl;
    }
}