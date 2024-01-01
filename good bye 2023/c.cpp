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
        vector<int> psum(n);
        psum[0] = a[0];
        for (int i = 1; i < n; i++)
            psum[i] = psum[i - 1] + a[i];
        int odd = 0, c = 0;
        if (a[0] % 2)
            odd++;
        cout << psum[0] << " ";
        for (int i = 1; i < n; i++)
        {
            if (a[i] % 2)
                odd++;
            // if (odd > 1)
            //     odd = odd - 2;
            // if (i >= 1)
            //     c += odd;
            // if (i < 2)
            //     cout << psum[i] << " ";
            // else
            //     cout << psum[i] - c << " ";
            c = odd / 3;
            if (odd % 3 == 1)
                c++;
            cout << psum[i] - c << " ";
        }
        cout << endl;
    }
}