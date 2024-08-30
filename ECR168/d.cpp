#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

bool solve(vector<vector<int>> &adj, vector<int> &a, int node, int p, int minus)
{
    if (minus > 1e9)
        return false;

    if ((int)adj[node].size() == 0)
    {
        return a[node] >= minus;
    }

    bool res = true;
    for (auto i : adj[node])
    {
        if (i != p)
        {
            if (node == 1)
                res = res && solve(adj, a, i, node, minus);
            else
                res = res && solve(adj, a, i, node, minus + max(0LL, minus - a[node]));
        }
    }

    return res;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1), p(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        vector<vector<int>> adj(n + 1);
        for (int i = 2; i <= n; i++)
        {
            cin >> p[i];
            adj[p[i]].push_back(i);
        }
        int ans = a[1];
        int s = a[1], e = 2e9, mid;
        while (s <= e)
        {
            mid = s + (e - s) / 2;
            if (solve(adj, a, 1, 0, max(0LL, mid - a[1])))
            {
                ans = max(ans, mid);
                s = mid + 1;
            }
            else
                e = mid - 1;
        }
        cout << ans << endl;
        cout << endl;
    }
}