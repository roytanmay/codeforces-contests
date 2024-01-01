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
        int n, x, y;
        cin >> n >> x >> y;
        if (x == y)
            cout << "0" << endl;
        else
        {
            // vector<int> v(n + 1, 0);
            int l = (x * y) / (__gcd(x, y));
            // int num = 1, ans = 0;
            // unordered_map<int, int> mp;
            // for (int i = y; i <= n; i += y)
            // {
            //     mp[i]++;
            //     if (i % l)
            //     {
            //         ans -= num;
            //         num++;
            //     }
            // }
            // for (int i = l; i <= n; i += l)
            // {
            //     if (!mp.count(i))
            //     {
            //         mp[i]++;
            //         num++;
            //     }
            // }

            // num = n;
            // for (int i = x; i <= n; i += x)
            // {
            //     if (!mp.count(i))
            //     {
            //         ans += num;
            //         num--;
            //     }
            // }

            int c1 = n / y, c2 = n / x, c3 = n / l;
            int temp1 = c1 - c3, temp2 = c2 - c3;
            int s1 = (n * (n + 1)) / 2;
            int temp3 = n - temp2;
            int s2 = (temp3 * (temp3 + 1)) / 2;

            int xsum = s1 - s2;
            int ysum = (temp1 * (temp1 + 1)) / 2;

            cout << xsum - ysum << endl;
        }
        cout << endl;
    }
}