#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

// Easy Version (B1)

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        // sort(a.begin(), a.end());
        int ans = 0, prev = -1;
        for (auto [i, c] : mp)
        {
            int d = m / i;
            d = min(d, c);
            ans = max(ans, d * i);

            if (prev != -1 && abs(i - prev) == 1)
            {
                while (d > 0)
                {
                    int r = m - d * i;
                    int d1 = r / prev;
                    d1 = min(d1, mp[prev]);

                    ans = max(ans, i * d + prev * d1);
                    d--;
                }

                int mini = min(c, mp[prev]);
                d = m / (i + prev);
                d = min(d, mini);

                int r = m - d * (i + prev);

                int d1 = r / prev;
                d1 = min(d1, max(mp[prev] - d, 0LL));

                int d2 = r / i;
                d2 = min(d2, max(c - d, 0LL));

                ans = max(ans, (i + prev) * d + max(d1 * prev, d2 * i));
            }

            prev = i;
        }

        cout << ans << endl;
        cout << endl;
    }
}

// signed main()
// {
//     int t = 1;
//     cin >> t;

//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         vector<int> a(n), c(n);
//         map<int, int> mp;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> c[i];
//             mp[a[i]] += c[i];
//         }

//         int ans = 0, prev = -1;
//         for (auto [i, c] : mp)
//         {
//             int d = m / i;
//             d = min(d, c);
//             ans = max(ans, d * i);

//             if (prev != -1 && abs(i - prev) == 1)
//             {
//                 if (d > 0)
//                 {
//                     int r = m - d * i;
//                     int d1 = r / prev;
//                     d1 = min(d1, mp[prev]);

//                     ans = max(ans, i * d + prev * d1);
//                     int p = d;

//                     d = p - 1;
//                     d = max(d, 0LL);

//                     r = m - d * i;
//                     d1 = r / prev;
//                     d1 = min(d1, mp[prev]);

//                     ans = max(ans, i * d + prev * d1);

//                     d = p - 2;
//                     d = max(d, 0LL);

//                     r = m - d * i;
//                     d1 = r / prev;
//                     d1 = min(d1, mp[prev]);

//                     ans = max(ans, i * d + prev * d1);
//                 }

//                 int mini = min(c, mp[prev]);
//                 d = m / (i + prev);
//                 d = min(d, mini);

//                 int r = m - d * (i + prev);

//                 int d1 = r / prev;
//                 d1 = min(d1, max(mp[prev] - d, 0LL));

//                 int d2 = r / i;
//                 d2 = min(d2, max(c - d, 0LL));

//                 ans = max(ans, (i + prev) * d + max(d1 * prev, d2 * i));
//             }

//             prev = i;
//         }

//         cout << ans << endl;
//         cout << endl;
//     }
// }