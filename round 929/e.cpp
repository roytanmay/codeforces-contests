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
        vector<int> a(n), psum(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        psum[0] = a[0];
        for (int i = 1; i < n; i++)
            psum[i] = psum[i - 1] + a[i];
        int q;
        cin >> q;
        while (q--)
        {
            int l, u;
            cin >> l >> u;
            l--;
            int v = u;
            if (l - 1 >= 0)
                v += psum[l - 1];
            int ind = lower_bound(psum.begin(), psum.end(), v) - psum.begin();
            ind = min(ind, n - 1);

            int sum = psum[ind];
            if (l - 1 >= 0)
                sum -= psum[l - 1];
            int res1 = (u * (sum + 1)) - ((sum * (sum - 1)) / 2), res2 = LLONG_MIN;

            if (psum[ind] > v)
            {
                sum -= a[ind];
                res2 = (u * (sum + 1)) - ((sum * (sum - 1)) / 2);
                if(res2 >= res1)
                    ind--;
            }
            ind++;
            ind = max(ind, l+1);
            // int len = ind - l + 1;
            
            cout << ind << " ";
        }
        cout << endl;
    }
}