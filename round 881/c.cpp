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
        int ans = 0;
        while (n)
        {
            ans += n;
            n /= 2;
        }
        cout << ans << endl;
        cout << endl;
    }
}