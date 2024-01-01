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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int i = 0, ans = 0;
        int f = 0;
        while (i < n - 1)
        {
            if (a[i] > a[i + 1])
            {
                if (f != 1)
                    ans++;
                f = 1;
            }
            else if (a[i] < a[i + 1])
            {
                if (f != 2)
                    ans++;
                f = 2;
            }
            i++;
        }
        cout << ans + 1 << endl;
        cout << endl;
    }
}