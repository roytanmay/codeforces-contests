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
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;

        int ans = INT_MAX;
        for (int a = min({x1, x2, x3}); a <= max({x1, x2, x3}); a++)
        {
            ans = min(ans, abs(a - x1) + abs(a - x2) + abs(a - x3));
        }
        cout << ans << endl;
    }
}