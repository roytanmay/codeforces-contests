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
        int x, k;
        cin >> x >> k;
        if (x % k)
        {
            cout << "1" << endl;
            cout << x << endl;
        }
        else
        {
            cout << "2" << endl;
            cout << k + 1 << " " << x - (k + 1) << endl;
        }
        cout << endl;
    }
}