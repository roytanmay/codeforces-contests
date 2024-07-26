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
        string a, b;
        cin >> a >> b;
        vector<vector<int>> fa(n, vector<int>(26, 0)), fb(n, vector<int>(26, 0));
        // vector<int> prefixDiff(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (i > 0)
            {
                fa[i] = fa[i - 1];
                fb[i] = fb[i - 1];
            }
            fa[i][a[i] - 'a']++;
            fb[i][b[i] - 'a']++;
        }
        vector<int> ans(q);
        for (int i = 0; i < q; i++)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            // if (l - 1 >= 0)
            //     ans[i] = abs(prefixDiff[r] - prefixDiff[l - 1]);
            // else
            //     ans[i] = prefixDiff[r];
            vector<int> ta = fa[r],
                        tb = fb[r];
            for (int j = 0; j < 26; j++)
            {
                if (l > 0)
                {

                    ta[j] -= fa[l - 1][j];
                    tb[j] -= fb[l - 1][j];
                }
                ans[i] += abs(ta[j] - tb[j]);
            }
            ans[i] /= 2;
        }
        for (auto i : ans)
            cout << i << endl;
        cout << endl;
    }
}