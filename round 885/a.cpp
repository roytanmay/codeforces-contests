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
        int n, m, k;
        cin >> n >> m >> k;
        int x, y;
        cin >> x >> y;
        bool f = true;
        while (k--)
        {
            int x1, y1;
            cin >> x1 >> y1;
            if ((abs(x1 - x) + abs(y1 - y)) % 2 == 0)
                f = false;
        }
        if (f)
            pyes;
        else
            pno;
        cout << endl;
    }
}