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
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        vector<int> ans;
        int i = 0, j = 0;
        bool f = true;
        while ((i < n || j < m) && f)
        {
            f = false;
            while (i < n && (a[i] <= k || a[i] == 0))
            {
                f = true;
                ans.push_back(a[i]);
                if (a[i] == 0)
                    k++;
                i++;
            }
            while (j < m && (b[j] <= k || b[j] == 0))
            {
                f = true;
                ans.push_back(b[j]);
                if (b[j] == 0)
                    k++;
                j++;
            }
        }
        if (ans.size() < n + m)
            cout << "-1" << endl;
        else
        {
            for (int i = 0; i < n + m; i++)
                cout << ans[i] << " ";
            cout << endl;
        }
        cout << endl;
    }
}