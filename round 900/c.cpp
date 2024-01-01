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
        int n, k, x;
        cin >> n >> k >> x;
        int m = n - k;
        int maxsum = ((n * (n + 1)) / 2) - ((m * (m + 1)) / 2);
        // cout << maxsum << endl;
        if ((k == x && k != 1) || x > maxsum || x < ((k * (k + 1)) / 2))
            pno;
        // else
        // {
        //     // unordered_map<int, int> mp;
        //     int s = m + 1, e = n, currsum = maxsum;
        //     while (s > 1 && currsum > x)
        //     {
        //         currsum -= e;
        //         currsum += (s - 1);
        //         // mp[e]++;
        //         s--;
        //         e--;
        //     }
        //     if (currsum == x)
        //         pyes;
        //     else
        //     {
        //         int d = x - currsum;
        //         bool f = false;
        //         for (int i = s; i <= e; i++)
        //         {
        //             if (i + d > e && i + d <= n)
        //             {
        //                 f = true;
        //                 break;
        //             }
        //         }
        //         if (f)
        //             pyes;
        //         else
        //             pno;
        //     }
        // }
        else
            pyes;
        // cout << endl;
    }
}