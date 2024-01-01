#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

void dfs(vector<vector<int>> &adj, vector<bool> &vis, vector<int> &noOfLeafNodes, int node)
{
    vis[node] = true;
    int c = 0;
    for (auto i : adj[node])
    {
        if (vis[i])
            continue;
        dfs(adj, vis, noOfLeafNodes, i);
        noOfLeafNodes[node] += noOfLeafNodes[i];
        c++;
    }
    if (c == 0)
        noOfLeafNodes[node] = 1;
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
        int qr;
        cin >> qr;
        vector<pair<int, int>> v(qr);
        for (int i = 0; i < qr; i++)
        {
            int x, y;
            cin >> x >> y;
            v[i] = {x, y};
        }

        vector<bool> vis(n + 1, false);
        vector<int> noOfLeafNodes(n + 1, 0);
        dfs(adj, vis, noOfLeafNodes, 1);
        for (auto [x, y] : v)
            cout << noOfLeafNodes[x] * noOfLeafNodes[y] << endl;
        cout << endl;
    }
}