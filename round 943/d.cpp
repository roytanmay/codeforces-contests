#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int score(vector<int> &p, vector<int> &a, int &n, int pos, int k)
{
    int maxi = 0, curr = 0;
    vector<bool> vis(n, false);
    while (!vis[pos] && k)
    {
        vis[pos] = true;
        maxi = max(maxi, curr + k * a[pos]);
        curr += a[pos];
        pos = p[pos];
        k--;
    }
    return maxi;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, k, pb, ps;
        cin >> n >> k >> pb >> ps;
        vector<int> p(n), a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            p[i]--;
        }
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int s1 = score(p, a, n, pb - 1, k), s2 = score(p, a, n, ps - 1, k);
        if (s1 > s2)
            cout << "Bodya" << endl;
        else if (s2 > s1)
            cout << "Sasha" << endl;
        else
            cout << "Draw" << endl;
    }
}