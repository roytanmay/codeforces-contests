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
        // vector<int> a(n), b(m);
        int a, b;
        multiset<int> st1, st2;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            st1.insert(a);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b;
            st2.insert(b);
        }
        int ans = 0;
        while ((int)st1.size())
        {
            int a1 = *st1.begin(), a2 = *st1.rbegin();
            int b1 = *st2.begin(), b2 = *st2.rbegin();
            int d1 = abs(a1 - b2), d2 = abs(a2 - b1);
            if (d1 > d2)
            {
                ans += d1;
                st1.erase(st1.find(a1));
                st2.erase(st2.find(b2));
            }
            else
            {
                ans += d2;
                st1.erase(st1.find(a2));
                st2.erase(st2.find(b1));
            }
        }
        cout << ans << endl;
    }
}