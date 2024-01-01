#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

static bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first < b.first)
        return true;
    else if (a.first > b.first)
        return false;
    return a.second > b.second;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int x, y;
        unordered_map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            int s = adj[i].size();
            if (s > 0)
                mp[s]++;
        }
        vector<pair<int, int>> v;
        for (auto [i, c] : mp)
            v.push_back({c, i});
        sort(v.begin(), v.end(), cmp);
        // for (auto i : v)
        //     cout << i.second << " " << i.first << endl;
        // cout << endl;
        // cout << endl;
        if (v.size() == 0)
        {
            x = 0;
            y = 0;
        }
        else if (v.size() == 1)
        {
            x = v[0].second;
            y = 0;
        }
        // else if (v.size() == 3)
        // {
        //     x = v[0].second;
        //     y = v[1].second - 1;
        // }
        // else if(mp[1] == v[0]) {x = v[0]; y=0;}
        else
        {
            if (v[0].first > 1)
            {
                x = v[0].second;
                y = v[0].second - 1;
            }
            else
            {
                x = v[0].second;
                y = v[1].second - 1;
            }
            // for (auto i : v)
            //     cout << i.second << " ";
            // cout << endl;
            // cout << endl;
        }
        cout << x << " " << y << endl;
        cout << endl;
    }
}