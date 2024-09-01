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
        int a, b;
        cin >> a >> b;
        if (a % 2 == 0 && b % 2 == 0)
            pyes;
        else if (b > 0)
        {
            b = b % 2;
            if (b != 0)
            {
                if (a >= 2 && (a - 2) % 2 == 0)
                    pyes;
                else
                    pno;
            }
            else
            {
                if (a % 2 == 0)
                    pyes;
                else
                    pno;
            }
        }
        else
        {
            if (a % 2 == 0)
                pyes;
            else
                pno;
        }
        // cout << endl;
    }
}