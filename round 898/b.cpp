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
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int temp = a[i] + 1;
            for (int j = 0; j < i; j++)
                temp *= a[j];
            for (int j = i + 1; j < n; j++)
                temp *= a[j];
            ans = max(ans, temp);
        }
        cout << ans << endl;
        cout << endl;
    }
}