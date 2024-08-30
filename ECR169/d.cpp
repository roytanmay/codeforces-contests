#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

// class DSU
// {
//     vector<int> parent, rank;

// public:
//     DSU(int n)
//     {
//         parent.resize(n + 1);
//         rank.resize(n + 1, 1);
//         for (int i = 0; i <= n; i++)
//             parent[i] = i;
//     }

//     int findParent(int x)
//     {
//         if (parent[x] == x)
//             return parent[x];
//         return parent[x] = findParent(parent[x]);
//     }

//     void union_set(int u, int v)
//     {
//         int pu = findParent(u), pv = findParent(v);
//         if (pu == pv)
//             return;
//         if (rank[pu] > rank[pv])
//             parent[pv] = pu;
//         else if (rank[pu] < rank[pv])
//             parent[pu] = pv;
//         else
//         {
//             parent[pv] = pu;
//             rank[pu]++;
//         }
//     }
// };

int dfs(int node, int dest, map<char, vector<int>> &mp, vector<int> &r, vector<int> &g, vector<int> &b, vector<int> &yl, map<int, int> &vis)
{
    if (node == dest)
    {
        // dp[{node, dest}] = 0;
        // dp[{dest, node}] = 0;
        return 0;
    }

    if (vis.count(node))
        return 1e14 * 1LL;
    vis[node] = 1;

    // if (dp.count({node, dest}))
    //     return dp[{node, dest}];

    // if (dp.count({dest, node}))
    //     return dp[{dest, node}];

    int res = 1e14 * 1LL;
    if (r[node] == 1)
    {
        for (auto i : mp['R'])
        {
            res = min(res, abs(node - i) + dfs(i, dest, mp, r, g, b, yl, vis));
        }
    }
    if (g[node] == 1)
    {
        for (auto i : mp['G'])
        {
            res = min(res, abs(node - i) + dfs(i, dest, mp, r, g, b, yl, vis));
        }
    }
    if (b[node] == 1)
    {
        for (auto i : mp['B'])
        {
            res = min(res, abs(node - i) + dfs(i, dest, mp, r, g, b, yl, vis));
        }
    }

    if (yl[node] == 1)
    {
        for (auto i : mp['Y'])
        {
            res = min(res, abs(node - i) + dfs(i, dest, mp, r, g, b, yl, vis));
        }
    }

    // dp[{node, dest}] = res;
    // dp[{dest, node}] = res;
    // cout << res << endl;
    return res;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;
        map<char, vector<int>> mp;
        vector<int> r(n + 1, 0), g(n + 1, 0), b(n + 1, 0), yl(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            string s;
            cin >> s;
            mp[s[0]].push_back(i);
            mp[s[1]].push_back(i);
            if (s[0] == 'R' || s[1] == 'R')
                r[i] = 1;
            if (s[0] == 'G' || s[1] == 'G')
                g[i] = 1;
            if (s[0] == 'B' || s[1] == 'B')
                b[i] = 1;
            if (s[0] == 'Y' || s[1] == 'Y')
                yl[i] = 1;
        }

        vector<int> ans(q);
        // map<pair<int, int>, int> dp, vis;
        vector<pair<int, int>> pp(q);

        for (int i = 0; i < q; i++)
        {
            int x, y;
            cin >> x >> y;
            pp[i] = {x, y};
        }
        for (int i = 0; i < q; i++)
        {
            int x = pp[i].first, y = pp[i].second;
            map<int, int> vis;
            // cout << x << " " << y << endl;
            if ((r[x] == 1 && r[y] == 1) || (g[x] == 1 && g[y] == 1) || (b[x] == 1 && b[y] == 1) || (yl[x] == 1 && yl[y] == 1))
            {
                ans[i] = abs(x - y);
            }
            else
            {
                int res = dfs(x, y, mp, r, g, b, yl, vis);
                if (res >= 1e14 * 1LL)
                    ans[i] = -1;
                else
                    ans[i] = res;
            }
        }
        for (auto i : ans)
            cout << i << endl;
        // cout << endl;
    }
}