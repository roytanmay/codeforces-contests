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
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;
        cin >> x4 >> y4;

        int a = 0;
        if (x1 == x2)
            a = abs(y1 - y2);
        else if (x1 == x3)
            a = abs(y1 - y3);
        else if (x1 == x4)
            a = abs(y1 - y4);
        cout << (a * a) << endl;
    }
}