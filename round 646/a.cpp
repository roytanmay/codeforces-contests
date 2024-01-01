#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "Yes" << endl
#define pno cout << "No" << endl

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int odd = 0, even = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2)
                odd++;
            else
                even++;
        }
        if (odd % 2)
        {
            if (odd == n && x % 2 == 0)
                pno;
            else
                pyes;
        }
        else
        {
            if (odd == 0 || x == n || (odd == n && x % 2 == 0))
                pno;
            else
                pyes;
        }
        cout << endl;
    }
}