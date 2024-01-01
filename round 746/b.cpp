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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n >= 2 * x)
            pyes;
        else
        {
            vector<int> v = a;
            sort(a.begin(), a.end());
            bool f = true;
            for (int i = n - x; i < x; i++)
            {
                if (a[i] != v[i])
                {
                    f = false;
                    break;
                }
            }
            if (f)
                pyes;
            else
                pno;
        }
        cout << endl;
    }
}