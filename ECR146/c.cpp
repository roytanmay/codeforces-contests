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
        int n, s1, s2;
        cin >> n >> s1 >> s2;
        vector<pair<int, int>> r(n);
        int x;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            r[i - 1] = make_pair(x, i);
        }
        sort(r.begin(), r.end());
        reverse(r.begin(), r.end());
        vector<int> r1, r2;
        for (int i = 1; i <= n; i++)
        {
            int cost1 = s1 * (r1.size() + 1);
            int cost2 = s2 * (r2.size() + 1);
            if (cost1 < cost2)
                r1.push_back(r[i - 1].second);
            else
                r2.push_back(r[i - 1].second);
        }
        cout << r1.size() << " ";
        for (auto i : r1)
            cout << i << " ";
        cout << endl;
        cout << r2.size() << " ";
        for (auto i : r2)
            cout << i << " ";
        cout << endl;
        cout << endl;
    }
}