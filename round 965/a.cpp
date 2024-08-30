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
        int x, y, k;
        cin >> x >> y >> k;
        if (k % 2 == 1)
        {

            cout << k * x << " " << k * y << endl;
            int x1 = 1e6, y1 = 1e6;
            k -= 1;
            k /= 2;
            while (k--)
            {
                cout << x1 << " " << y1 << endl;
                cout << (-1) * x1 << " " << (-1) * y1 << endl;
                x1++;
                y1++;
            }
        }
        else
        {
            int x1 = (k - 1) * x + 1, y1 = (k - 1) * y + 1;
            cout << x1 << " " << y1 << endl;
            cout << x - 1 << " " << y - 1 << endl;

            x1 = 1e6;
            y1 = 1e6;

            k -= 2;
            k /= 2;

            while (k--)
            {
                cout << x1 << " " << y1 << endl;
                cout << (-1) * x1 << " " << (-1) * y1 << endl;
                x1++;
                y1++;
            }
        }
        // cout << endl;
    }
}