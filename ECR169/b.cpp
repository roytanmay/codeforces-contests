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
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        vector<vector<int>> v = {{l1, r1}, {l2, r2}};
        sort(v.begin(), v.end());
        l1 = v[0][0], r1 = v[0][1], l2 = v[1][0], r2 = v[1][1];

        if (l2 > r1)
            cout << 1 << endl;
        else if (l2 == r1)
            cout << 2 << endl;
        else if (l1 == l2)
        {
            if (r1 == r2)
                cout << r1 - l1 << endl;
            else
                cout << r1 - l1 + 1 << endl;
        }
        else if (r1 == r2)
        {
            cout << r2 - l2 + 1 << endl;
        }
        else if (r2 < r1)
        {
            cout << r2 - l2 + 2 << endl;
        }
        // else if (r2 == r1)
        // {
        //     if (l1 == l2)
        //         cout << r2 - l2 << endl;
        //     else
        //         cout << r2 - l2 + 1 << endl;
        // }
        // else if (l1 == l2)
        // {
        //     cout << min(r1, r2) - l1 + 1 << endl;
        // }
        else
        {
            cout << r1 - l2 + 2 << endl;
        }
        // cout << endl;
    }
}