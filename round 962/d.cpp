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
        int n, x;
        cin >> n >> x;
        int ans = 0;
        for (int a = 1; a <= x; a++)
        {
            for (int b = 1; b <= x - a && a * b <= n; b++)
            {
                ans += min(x - a - b, (n - a * b) / (a + b));
            }
        }
        cout << ans << endl;
        cout << endl;
    }
}