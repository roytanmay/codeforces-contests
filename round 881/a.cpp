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
        sort(a.begin(), a.end());
        int i = 0, j = (n + 1) / 2;
        int ans = 0;
        while (j < n)
            ans += (a[j++] - a[i++]);
        cout << ans << endl;
        cout << endl;
    }
}