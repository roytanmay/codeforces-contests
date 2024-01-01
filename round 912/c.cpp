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
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = n - 1, sum = 0, c = 1;
        stack<pair<int, int>> st;
        while (i < n)
        {
            sum = a[i];
            c++;
            while (sum < 0 && st.size())
            {
                c = min(c, st.top().first);
                sum += st.top().second;
                st.pop();
            }
            st.push({c, sum});
            i++;
        }
        while (st.size())
        {
            ans += (st.top().first * st.top().second);
            st.pop();
        }
        cout << ans << endl;
    }
}