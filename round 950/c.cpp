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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        map<int, int> count;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (a[i] != b[i])
                count[b[i]]++;
        }
        int m;
        cin >> m;
        vector<int> d(m);
        map<int, int> mp;
        for (int i = 0; i < m; i++)
            cin >> d[i];

        bool found = false;
        for (auto i : b)
            found = (found | (i == d[m - 1]));

        for (int i = 0; i < m; i++)
        {
            if (count.count(d[i]))
                mp[d[i]]++;
        }

        bool f = true;
        for (auto [i, c] : count)
        {
            if (!mp.count(i) || c > mp[i])
            {
                f = false;
                break;
            }
        }

        if (a == b)
            f = f & found;
        else
            f = f & (mp[d[m - 1]] > 0 || found);

        if (f)
            pyes;
        else
            pno;

        // cout << endl;
    }
}