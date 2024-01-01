#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

bool isPossible(vector<int> &a, int &n, int h, int &mid)
{
    if (n == 1)
        return mid == h;
    for (int i = 1; i < n; i++)
    {
        h -= min(a[i] - a[i - 1], mid);
        if (h <= 0)
            return true;
    }
    return h <= mid;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, h;
        cin >> n >> h;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int s = 1, e = h, mid, ans;
        while (s <= e)
        {
            mid = s + (e - s) / 2;
            if (isPossible(a, n, h, mid))
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