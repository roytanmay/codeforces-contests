#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

signed main()
{
    int t = 1;
    // cin >> t;

    while (t--)
    {
        int n, q, k;
        cin >> n >> q >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i]; // read input array a from user
        vector<int> v(n), psum(n);
        v[0] = a[0] - 1;
        v[n - 1] = k - a[n - 1];
        for (int i = 1; i < n - 1; i++)
        {
            v[i] = a[i + 1] - a[i - 1] - 2;
        }
        psum[0] = v[0]; // calculate psum array from v array 	//(1-based indexing)
        for (int i = 1; i < n; i++)
            psum[i] = psum[i - 1] + v[i];
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            if (l == r)
                cout << k - 1 << endl;
            else
            {
                int res = psum[r];
                if (l > 0)
                    res -= psum[l - 1]; //(1-based indexing)  //(negative value)  //(l==0
                res -= (v[l] + v[r]);
                res += (a[l + 1] - 1 + k - a[r - 1] - 2);
                cout << res << endl;
            }
            // cout << endl;
        }
    }
}