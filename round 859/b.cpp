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
        int e = 0, o = 0;
        for (auto i : a)
        {
            if (i % 2)
                o += i;
            else
                e += i;
        }
        if (o >= e)
            pno;
        else
            pyes;
        cout << endl;
    }
}