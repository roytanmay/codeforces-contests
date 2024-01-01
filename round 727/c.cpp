#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

signed main()
{
    int t = 1;
    // cin >> t;

    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        vector<int> d;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] > x)
            {
                d.push_back(a[i] - a[i - 1]);
            }
        }
        if (k == 0)
            cout << d.size() + 1 << endl;
        else if (d.size() == 0)
            cout << "1" << endl;
        else
        {
            sort(d.begin(), d.end());
            int i = 0, t;
            while (i < d.size() && k)
            {
                t = (d[i] - 1) / x;
                if (t <= k)
                    k -= t;
                else
                    break;
                i++;
            }
            cout << d.size() - i + 1 << endl;
        }
        cout << endl;
    }
}