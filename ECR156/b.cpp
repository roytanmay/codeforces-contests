#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

bool inCircle(int cx, int cy, int r, int x, int y)
{
    double d = sqrt((double)(cx - x) * (cx - x) + (cy - y) * (cy - y));
    return d <= (double)r;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int px, py, ax, ay, bx, by;
        cin >> px >> py >> ax >> ay >> bx >> by;
        double d1 = sqrt((double)px * px + py * py);
        double d2 = sqrt((double)(ax - bx) * (ax - bx) + (ay - by) * (ay - by)) / 2;
        double d3 = sqrt((double)(ax - px) * (ax - px) + (ay - py) * (ay - py));
        double d4 = sqrt((double)(px - bx) * (px - bx) + (py - by) * (py - by));
        double d5 = sqrt((double)ax * ax + ay * ay);
        double d6 = sqrt((double)bx * bx + by * by);

        if (d5 == d6)
        {
            if (d5 < min(d3, d4))
                cout << min(d3, d4) << endl;
            else
                cout << d5 << endl;
        }
        else if (d5 < d6 && d3 < d4)
        {
            if (d5 < d3)
                cout << d3 << endl;
            else
                cout << d5 << endl;
        }
        else if (d6 < d5 && d4 < d3)
        {
            if (d6 < d4)
                cout << d4 << endl;
            else
                cout << d6 << endl;
        }
        else if (d5 < d6 && d3 > d4)
        {
        }
        cout << d2 << endl;

        cout << endl;
    }
}