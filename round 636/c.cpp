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
        {
            cin >> a[i];
        }
        int sum = 0, i = 0;
        while (i < n)
        {
            int maxi = a[i];
            if (a[i] < 0)
            {
                while (i < n && a[i] < 0)
                {
                    maxi = max(maxi, a[i]);
                    i++;
                }
            }
            else
            {
                while (i < n && a[i] > 0)
                {
                    maxi = max(maxi, a[i]);
                    i++;
                }
            }
            sum += maxi;
        }
        cout << sum << endl;
        cout << endl;
    }
}