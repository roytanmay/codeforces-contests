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
        int ans = -10000;
        int sum = 0, s = 0, e = 0, p = -1;
        while (e < n)
        {
            p = abs(a[e]) % 2;
            sum = a[e];
            ans = max(ans, sum);
            if (sum < 0)
                sum = 0;
            e++;
            while (e < n && abs(a[e]) % 2 != p)
            {
                sum += a[e];
                ans = max(ans, sum);
                if (sum < 0)
                    sum = 0;
                p = abs(a[e]) % 2;
                e++;
            }
        }
        cout << ans << endl;
    }
}