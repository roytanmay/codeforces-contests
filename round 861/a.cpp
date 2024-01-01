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
        int l, r;
        cin >> l >> r;
        int ans, luckyness = -1;
        for (int i = l; i <= r; i++)
        {
            int maxi = 0, mini = 9, temp = i;
            while (temp)
            {
                maxi = max(maxi, temp % 10);
                mini = min(mini, temp % 10);
                temp /= 10;
            }
            if (maxi - mini > luckyness)
            {
                luckyness = maxi - mini;
                ans = i;
            }
            if (luckyness == 9)
                break;
        }
        cout << ans << endl;
        cout << endl;
    }
}