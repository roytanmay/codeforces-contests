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
        int x;
        cin >> x;
        int ans = 0;
        while (ans * (ans + 1) < 2 * x)
            ans++;
        if (ans * (ans + 1) / 2 == x + 1)
            ans++;
        cout << ans << endl;
        cout << endl;
    }
}