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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int s = -1, e = -1, sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (a[i] % x)
            {
                if (s == -1)
                    s = i;
                e = i;
            }
        }
        if (sum % x)
            cout << n << endl;
        else if (s == -1)
            cout << "-1" << endl;
        else
            cout << max(n - s - 1, e) << endl;
        cout << endl;
    }
}