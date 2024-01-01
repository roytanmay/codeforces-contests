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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> lf(n), rg(n);
        lf[0] = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                lf[i] = i;
            else if (i > 0)
                lf[i] = lf[i - 1];
        }
        rg[n - 1] = n;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
                rg[i] = i;
            else if (i < n - 1)
                rg[i] = rg[i + 1];
        }

        set<pair<int, int>> st;
        for (int i = 0; i < m; i++)
        {
            int l, r;
            cin >> l >> r;
            int one = rg[l - 1], zero = lf[r - 1];
            if (one > zero)
                st.insert({-1, -1});
            else
                st.insert({one, zero});
        }
        cout << st.size() << endl;
        cout << endl;
    }
}