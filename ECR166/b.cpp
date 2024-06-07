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
        vector<int> a(n), b(n + 1);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n + 1; i++)
            cin >> b[i];

        int last = a[0], ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += abs(b[i] - a[i]);

            if (abs(b[n] - a[i]) < abs(b[n] - last))
                last = a[i];

            if ((b[i] > b[n] && b[n] > a[i]) || (b[i] < b[n] && b[n] < a[i]))
                last = b[n];
            else if (abs(b[n] - b[i]) < abs(b[n] - last))
                last = b[i];
        }

        ans += (abs(b[n] - last) + 1);

        cout << ans << endl;
    }
}