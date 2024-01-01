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
        vector<int> a(n), b(n);
        set<int> st;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
            // st.insert(b[i]);
            v[i] = {a[i], b[i]};
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> b[i];
        //     v[i] = {a[i], b[i]};
        // }
        sort(v.begin(), v.end());
        sort(b.begin(), b.end());
        sort(a.begin(), a.end());
        int ans = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            // st.erase(st.find(v[i].second));
            auto it = lower_bound(b.begin(), b.end(), v[i].second);
            int count = it - b.begin();

            int l = b.end() - upper_bound(b.begin(), b.end(), v[i].second);
            count -= (i - l);
            // cout << v[i].second << " " << count << endl;
            // auto it = st.lower_bound(v[i].second);
            // int count = distance(st.begin(), it);
            ans += max(count, 0LL);
            // c++;
        }
        cout << ans << endl;
    }
}