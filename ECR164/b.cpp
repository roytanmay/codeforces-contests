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

        int i = 0, ans = n, l = 0, r = 0, left = a[0], right;
        while (i < n)
        {
            while (i < n && a[i] == left)
            {
                i++;
                l++;
            }

            i++;
            if (i >= n)
                break;

            int right = a[i];
            while (i < n && a[i] == right)
            {
                i++;
                r++;
            }

            // cout << l << " " << r << endl;
            if (l > 0 && r > 0 && left == right)
                ans = min(ans, min(l, r));
            l = r;
            left = right;
            r = 0;
        }

        if (ans == n)
            cout << "-1" << endl;
        else
            cout << ans << endl;
    }
}