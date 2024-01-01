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
        k--;
        int ans;
        if (n % 2)
        {
            int c = n / 2;
            int gap = k / c;
            ans = (k + gap) % n + 1;
        }
        else
            ans = k % n + 1;
        cout << ans << endl;
        cout << endl;
    }
}