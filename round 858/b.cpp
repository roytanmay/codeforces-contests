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
        int c0 = 0, c1 = 0;
        vector<int> b;
        for (auto i : a)
        {
            if (i == 0)
                c0++;
            else if (i == 1)
                c1++;
            else
                b.push_back(i);
        }
        if (c0 <= (n + 1) / 2)
            cout << "0" << endl;
        else if (c0 == n || c0 + c1 < n)
            cout << "1" << endl;
        else
            cout << "2" << endl;

        cout << endl;
    }
}