#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

bool check(vector<int> &a, int &n, int mid)
{
    int t = 2 * mid + a[0], up = 0;
    for (int i = 0; i < 3; i++)
    {
        up = upper_bound(a.begin() + up, a.end(), t) - a.begin();
        if (up >= n)
            return true;
        t = 2 * mid + a[up];
    }
    return false;
}

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
        sort(a.begin(), a.end());
        int s = 0, e = 1e9;
        int mid, ans;
        while (s <= e)
        {
            // cout << s << " " << e << endl;
            mid = s + (e - s) / 2;
            if (check(a, n, mid))
            {
                ans = mid;
                e = mid - 1;
            }
            else
                s = mid + 1;
        }
        cout << ans << endl;
        cout << endl;
    }
}