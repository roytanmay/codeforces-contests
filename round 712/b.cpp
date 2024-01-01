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
        string a, b;
        cin >> a >> b;
        if (a == b)
        {
            pyes;
            continue;
        }
        int c0 = 0, c1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
                c1++;
            else
                c0++;
        }
        bool changed = false, f = true;
        for (int i = n - 1; i >= 0; i--)
        {
            if ((a[i] != b[i] && !changed) || (a[i] == b[i] && changed))
            {
                if (c0 == c1)
                    changed = !changed;
                else
                {
                    f = false;
                    break;
                }
            }
            if (a[i] == '1')
                c1--;
            else
                c0--;
        }
        if (f)
            pyes;
        else
            pno;
        // cout << endl;
    }
}