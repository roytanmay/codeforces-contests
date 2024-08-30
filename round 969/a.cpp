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
        if (r - l < 2)
            cout << "0" << endl;
        else if (r - l == 2)
        {
            if (__gcd(l, r) == 1)
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }
        else
        {
            int st = l, ans = 0;
            if (l % 2 == 0)
                st++;
            while (st <= r)
            {
                int c = 0;
                while (st <= r && c < 3)
                {
                    st++;
                    c++;
                }
                if (c == 3)
                    ans++;
                st++;
            }
            cout << ans << endl;
        }
    }
}