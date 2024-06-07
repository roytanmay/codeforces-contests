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
        vector<int> b;
        for (int i = 0; i < n - 1; i++)
            b.push_back(__gcd(a[i], a[i + 1]));
        vector<bool> prefix(n - 1), suffix(n - 1);
        prefix[0] = true;
        for (int i = 1; i < n - 1; i++)
            prefix[i] = (prefix[i - 1] & (b[i] >= b[i - 1]));
        suffix[n - 2] = true;
        for (int i = n - 3; i >= 0; i--)
            suffix[i] = (suffix[i + 1] & (b[i] <= b[i + 1]));

        bool f = false;
        for (int i = 0; i < n; i++)
        {
            if (i - 1 >= 0 && i + 1 < n)
            {
                int g = __gcd(a[i - 1], a[i + 1]);
                if (i - 2 >= 0 && i + 1 < n - 1)
                {
                    if (prefix[i - 2] && suffix[i + 1] && g >= b[i - 2] && g <= b[i + 1])
                        f = true;
                }
                else if (i - 2 >= 0 && prefix[i - 2] && g >= b[i - 2])
                    f = true;
                else if (i + 1 < n - 1 && suffix[i + 1] && g <= b[i + 1])
                    f = true;
                else if (i - 2 < 0 && i + 1 >= n - 1)
                    f = true;
            }
            else if (i - 1 >= 0)
            {
                if (i - 2 >= 0 && i + 1 < n - 1)
                {
                    if (prefix[i - 2] && suffix[i + 1])
                        f = true;
                }
                else if (i - 2 >= 0 && prefix[i - 2])
                    f = true;
                else if (i + 1 < n - 1 && suffix[i + 1])
                    f = true;
                else if (i - 2 < 0 && i + 1 >= n - 1)
                    f = true;
            }
            else if (i + 1 < n)
            {
                if (i - 2 >= 0 && i + 1 < n - 1)
                {
                    if (prefix[i - 2] && suffix[i + 1])
                        f = true;
                }
                else if (i - 2 >= 0 && prefix[i - 2])
                    f = true;
                else if (i + 1 < n - 1 && suffix[i + 1])
                    f = true;
                else if (i - 2 < 0 && i + 1 >= n - 1)
                    f = true;
            }

            if (f)
                break;
        }

        if (f)
            pyes;
        else
            pno;
        // cout << endl;
    }
}