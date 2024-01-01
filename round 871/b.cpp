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
        int ans = 0, i = 0;
        while (i < n)
        {
            int c = 0;
            while (i < n && a[i] == 0)
            {
                c++;
                i++;
            }
            ans = max(ans, c);
            i++;
        }
        cout << ans << endl;
        cout << endl;
    }
}