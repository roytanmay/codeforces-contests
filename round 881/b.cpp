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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
        }
        int c = 0, i = 0;
        while (i < n)
        {
            if (a[i] < 0)
            {
                while (i < n && a[i] <= 0)
                    i++;
                c++;
            }
            i++;
        }
        cout << sum << " " << c << endl;
        cout << endl;
    }
}