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
        vector<int> a(n + 1, 0);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        unordered_map<int, int> mp;
        int ans = 0, j;
        for (int i = 1; i <= n; i++)
        {
            j = a[i] - i;
            while (j <= n)
            {
                if (j > 0 && i < j && a[i] * a[j] == i + j)
                    ans++;
                j += a[i];
            }
        }
        cout << ans << endl;
        cout << endl;
    }
}