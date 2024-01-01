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
        if (n <= 2)
            pyes;
        else
        {
            vector<int> b;
            for (int i = 1; i < n; i++)
                b.push_back((a[i] * a[i - 1]) / (__gcd(a[i], a[i - 1])));

            bool f = true;
            for (int i = 1; i < n - 1; i++)
            {
                if (__gcd(b[i], b[i - 1]) != a[i])
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