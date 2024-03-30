#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int dfs(vector<set<int>> &adj, int &mid, int &k, int &cuts, int node, int parent)
{
    int sz = 1;
    for (auto i : adj[node])
    {
        if (i != parent)
            sz += dfs(adj, mid, k, cuts, i, node);
    }

    if (sz >= mid && cuts < k)
    {
        sz = 0;
        cuts++;
    }

    return sz;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<set<int>> adj(n + 1);
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].insert(v);
            adj[v].insert(u);
        }

        int ans = 0, s = 1, e = n, mid, cuts = 0;
        while (s <= e)
        {
            mid = s + (e - s) / 2;
            cuts = 0;
            if (dfs(adj, mid, k, cuts, 1, 0) >= mid && cuts == k)
            {
                ans = max(ans, mid);
                s = mid + 1;
            }
            else
                e = mid - 1;
        }

        cout << ans << endl;
    }
}