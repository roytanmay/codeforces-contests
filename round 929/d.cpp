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
        if ((a[0] == 1 && a[0] == a[1]) || a[0] == a[n - 1])
            pno;
        else if (a[0] == a[1])
        {
            bool f = false;
            for (int i = 2; i < n; i++)
            {
                int r = a[i] % a[0];
                if (r > 0 && r < a[0])
                {
                    f = true;
                    break;
                }
            }
            if (f)
                pyes;
            else
                pno;
        }
        else
            pyes;
        // cout << endl;
    }
}