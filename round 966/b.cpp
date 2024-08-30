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
        vector<int> a(n + 1), vis(n + 1, 0);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        bool f = true;
        vis[a[1]] = 1;
        for (int i = 2; i <= n; i++)
        {
            vis[a[i]] = 1;
            if (a[i] - 1 > 0 && a[i] + 1 <= n)
            {
                if (vis[a[i] - 1] == 0 && vis[a[i] + 1] == 0)
                {
                    f = false;
                    break;
                }
            }
            else if (a[i] - 1 > 0)
            {
                if (vis[a[i] - 1] == 0)
                {
                    f = false;
                    break;
                }
            }
            else if (a[i] + 1 <= n)
            {
                if (vis[a[i] + 1] == 0)
                {
                    f = false;
                    break;
                }
            }
        }

        if (f)
            pyes;
        else
            pno;
        // cout << endl;
    }
}