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
        vector<int> a(n);
        for (int i = 0; i < n - 1; i++)
            cin >> a[i];

        if (n == 2)
        {
            if (a[0] == 1 || a[0] == 2 || a[0] == 3)
                pyes;
            else
                pno;
        }
        else
        {
            vector<bool> vis(n + 1, false);
            int diff = -1;
            if (a[0] <= n)
                vis[a[0]] = true;
            else
                diff = a[0];
            bool f = true;
            for (int i = 1; i < n - 1; i++)
            {
                int d = a[i] - a[i - 1];
                if (d <= n)
                {
                    if (vis[d])
                    {
                        if (diff == -1)
                            diff = d;
                        else
                        {
                            f = false;
                            break;
                        }
                    }
                    else
                        vis[d] = true;
                }
                else
                    diff = d;
            }

            if (!f)
                pno;
            else
            {
                int sum = 0;
                for (int i = 1; i <= n; i++)
                {
                    if (!vis[i])
                        sum += i;
                }
                if (diff == -1)
                {
                    int total = n * (n + 1) / 2;
                    if (total - a[n - 2] == sum)
                        pyes;
                    else
                        pno;
                }
                else if (sum == diff)
                    pyes;
                else
                    pno;
            }
        }
        // cout << endl;
    }
}