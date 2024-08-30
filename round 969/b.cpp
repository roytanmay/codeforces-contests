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
        set<int> st;
        int a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            st.insert(a);
        }
        vector<int> ans(m);
        for (int q = 0; q < m; q++)
        {
            char ch;
            int l, r;
            cin >> ch >> l >> r;
            auto it1 = st.lower_bound(l), it2 = st.lower_bound(r);
            if (it1 == st.end() || *it1 > r)
            {
                ans[q] = *st.rbegin();
                continue;
            }

            int rv = *st.rbegin();
            if (it2 != st.end())
            {
                if (*it2 > r)
                    it2--;
                rv = *it2;
            }

            st.erase(rv);
            if (ch == '+')
                rv++;
            else
                rv--;
            st.insert(rv);

            ans[q] = *st.rbegin();
        }

        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }
}