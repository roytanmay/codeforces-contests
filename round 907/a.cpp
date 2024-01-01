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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int i = 2, e;
        bool f = true;
        while (i <= n)
        {
            e = 2 * i;
            for (int j = i + 2; j <= min(n, e); j++)
            {
                if (a[j] < a[j - 1])
                {
                    f = false;
                    break;
                }
            }
            if (!f)
                break;
            i = e;
        }
        if (f)
            pyes;
        else
            pno;
        // cout << endl;
    }
}