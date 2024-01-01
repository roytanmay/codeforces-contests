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
        // int mini = n, maxi = 0;
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            if (i != a[i - 1])
            {
                v.push_back(abs(i - a[i - 1]));
            }
        }
        int ans = v[0];
        for (int i = 1; i < v.size(); i++)
        {
            ans = __gcd(ans, v[i]);
        }
        cout << ans << endl;
        cout << endl;
    }
}