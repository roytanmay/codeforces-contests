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
        int a, b;
        cin >> a >> b;
        int ans = 1e9;
        for (int i = 1; i <= 1e5; i++)
        {
            ans = min(ans, (a + i - 1) / i + (b + i - 1) / i + (i - 1));
        }
        cout << ans << endl;
        cout << endl;
    }
}