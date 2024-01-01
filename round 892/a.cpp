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
        sort(a.begin(), a.end());
        vector<int> b, c;
        b.push_back(a[0]);
        int i = 1, prev = 0;
        while (i < n && a[i] == a[prev])
        {
            b.push_back(a[i]);
            i++;
            prev++;
        }
        while (i < n)
        {
            c.push_back(a[i]);
            i++;
        }
        if (b.size() && c.size())
        {
            cout << b.size() << " " << c.size() << endl;
            for (auto j : b)
                cout << j << " ";
            cout << endl;

            for (auto j : c)
                cout << j << " ";
            cout << endl;
        }
        else
            cout << "-1" << endl;
        cout << endl;
    }
}