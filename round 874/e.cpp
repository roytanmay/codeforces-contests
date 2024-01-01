#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

void dfs(vector<vector<int>> &adj, vector<bool> &vis, int node)
{
    vis[node] = true;
    for (auto i : adj[node])
    {
        if (!vis[i])
            dfs(adj, vis, i);
    }
}

bool check(vector<vector<int>> &adj, int u, int v)
{
    for (auto i : adj[u])
    {
        if (i == v)
            return false;
    }
    return true;
}

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
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < n; i++)
        {
            if (check(adj, i + 1, a[i]))
                adj[i + 1].push_back(a[i]);
            if (check(adj, a[i], i + 1))
                adj[a[i]].push_back(i + 1);
        }
        vector<bool> vis(n + 1, false);
        int components = 0, count = 0;
        // for (auto i : adj)
        // {
        //     for (auto j : i)
        //         cout << j << " ";
        //     cout << endl;
        // }
        for (int i = 1; i <= n; i++)
        {
            if (adj[i].size() == 1)
                count++;
            if (!vis[i])
            {
                components++;
                dfs(adj, vis, i);
            }
        }
        // cout << count << endl;
        count /= 2;
        int mini = components;
        if (count)
            mini = components - count + 1;
        cout << mini << " " << components << endl;
        cout << endl;
    }
}