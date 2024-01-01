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
        vector<int> p(2 * n);
        for (int i = 0; i < 2 * n; i++)
            cin >> p[i];
        if (n == 1)
            cout << abs(p[1] - p[0]) << endl;
        else
        {
            sort(p.begin(), p.end());
            bool neg = false;
            if (p[0] < 0)
                neg = true;
            int res = 0;
            for (int i = 0; i < n; i++)
            {
                res += (p[2 * n - i - 1] - p[i]);
            }
            if (neg)
                cout << res - n + 1 << endl;
            else
                cout << res << endl;
        }
        cout << endl;
    }
}