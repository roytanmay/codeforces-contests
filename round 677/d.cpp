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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<pair<int, int>> res;
        int ind = -1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[0])
            {
                ind = i;
                res.push_back({1, i + 1});
            }
        }
        if (ind == -1)
            pno;
        else
        {
            pyes;
            for (int i = 1; i < n; i++)
            {
                if (a[i] == a[0])
                    res.push_back({ind + 1, i + 1});
            }
            for (auto [x, y] : res)
                cout << x << " " << y << endl;
        }
        cout << endl;
    }
}