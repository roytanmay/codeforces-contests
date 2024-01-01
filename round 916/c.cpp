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
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        vector<int> psum(n), maxi(n);
        psum[0] = a[0];
        maxi[0] = b[0];
        for (int i = 1; i < n; i++)
        {
            psum[i] = psum[i - 1] + a[i];
            maxi[i] = max(maxi[i - 1], b[i]);
        }

        int i = min(n, k) - 1, ans = 0;
        while (i >= 0)
        {
            int temp = psum[i] + max(0 * 1LL, (k - i - 1) * maxi[i]);
            ans = max(ans, temp);
            i--;
        }
        cout << ans << endl;
    }
}