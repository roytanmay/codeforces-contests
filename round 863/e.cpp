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
        int k;
        cin >> k;
        int num = 1;
        int ans = 0, temp = 1;
        char ch;
        while (k)
        {
            num = (k % 9);
            num += min(1 * 1LL, (k % 9) / 4);
            ch = '0';
            ch += num;
            ans = temp * (ch - '0') + ans;
            temp *= 10;
            k /= 9;
        }
        cout << ans << endl;
        // cout << endl;
    }
}