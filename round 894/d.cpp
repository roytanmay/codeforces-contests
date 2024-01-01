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
        int s = 1, e = 1e10;
        int mid, res;
        while (s <= e)
        {
            mid = s + (e - s) / 2;
            // cout << mid << endl;
            if ((mid * (mid - 1)) / 2 > n)
            {
                res = mid - 1;
                e = mid - 1;
            }
            else
                s = mid + 1;
        }
        int m = n - (res * (res - 1)) / 2;
        cout << res + m << endl;
        cout << endl;
    }
}