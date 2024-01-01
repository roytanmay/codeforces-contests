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
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> psum(n, 0);
        psum[0] = a[0];
        for (int i = 1; i < n; i++)
            psum[i] = psum[i - 1] + a[i];
        for (int i = 0; i < q; i++)
        {
            int l, r, k;
            cin >> l >> r >> k;
            int sum = psum[r - 1];
            if (l - 1 > 0)
                sum -= psum[l - 2];
            sum = psum[n - 1] - sum;
            sum += ((l - r + 1) * k);
            if (sum % 2)
                pyes;
            else
                pno;
        }
        cout << endl;
    }
}