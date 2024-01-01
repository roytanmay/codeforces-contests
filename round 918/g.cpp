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
        int n, m;
        cin >> n >> m;
        vector<vector<vector<int>>> adj(n + 1);
        int u, v, w;
        for (int i = 0; i < m; i++)
        {
            cin >> u >> v >> w;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        vector<int> s(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> s[i];

        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        vector<vector<int>> dist(n + 1, vector<int>(1002, 1e12));
        dist[1][1001] = 0;
        pq.push({0, 1, s[1]});
        int ans;

        while (!pq.empty())
        {
            int time = pq.top()[0], city = pq.top()[1], sf = pq.top()[2];
            pq.pop();

            if (city == n)
            {
                ans = time;
                break;
            }

            for (auto i : adj[city])
            {
                v = i[0];
                w = i[1];
                if (dist[v][sf] > time + sf * w)
                {
                    dist[v][sf] = time + sf * w;
                    pq.push({dist[v][sf], v, min(sf, s[v])});
                }
            }
        }

        cout << ans << endl;
    }
}