#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int dfs(vector<int> &p, vector<int> &vis, vector<int> &ans, string &colors, int node, int c)
{
    vis[node] = 1;
    if (colors[node - 1] == '0')
        c++;
    if (p[node] == node)
    {
        return ans[node] = c;
    }
    if (vis[p[node]] == 0)
    {
        return ans[node] = dfs(p, vis, ans, colors, p[node], c);
    }
    return ans[node] = c;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> p[i];
        string colors;
        cin >> colors;
        vector<int> ans(n + 1), vis(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            if (vis[i] == 0)
            {
                dfs(p, vis, ans, colors, i, 0);
            }
        }
        for (int i = 1; i <= n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}