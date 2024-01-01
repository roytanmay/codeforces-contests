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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (k >= 2)
            pyes;
        else
        {
            int maxi = 0, i = 0;
            while (i < n)
            {
                int c = 1;
                i++;
                while (i < n && a[i - 1] > a[i])
                {
                    i++;
                    c++;
                }
                maxi = max(maxi, c);
            }
            if (maxi > k)
                pno;
            else
                pyes;
        }
    }
}