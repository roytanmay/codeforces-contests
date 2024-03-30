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
        int n, k;
        cin >> n >> k;
        int t = 2 * n * 2 - 2;
        if (k == 4 * n - 2)
            cout << 2 * n << endl;
        else
        {
            int ans = (k / 2) + (k % 2);
            cout << ans << endl;
        }
    }
}