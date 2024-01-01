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
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = make_pair(x, i);
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            int ind = a[i].second;
            ans[ind] = b[i];
        }
        for (auto i : ans)
            cout << i << " ";
        cout << endl;
        cout << endl;
    }
}