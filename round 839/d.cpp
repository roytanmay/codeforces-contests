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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int l = 0, r = 1e9, t;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                t = (a[i] + a[i + 1] + 1) / 2;
                l = max(l, t);
            }
            else if (a[i] < a[i + 1])
            {
                t = (a[i] + a[i + 1]) / 2;
                r = min(r, t);
            }
        }
        if (l <= r)
            cout << l << endl;
        else
            cout << "-1" << endl;
        cout << endl;
    }
}