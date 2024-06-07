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
        vector<int> x(n), a(n);
        for (int i = 1; i < n; i++)
            cin >> x[i];
        a[0] = 1000;
        for (int i = 1; i < n; i++)
            a[i] = a[i - 1] + x[i];
        for (auto i : a)
            cout << i << " ";
        cout << endl;
    }
}