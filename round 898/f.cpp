#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

// bool isPossible(vector<int> &a, vector<int> &h, int n, int k, int mid)
// {
//     if (mid == 0)
//         return true;
//     if (mid == 1)
//     {
//         int mini = *min_element(a.begin(), a.end());
//         return mini <= k;
//     }
//     int s = 0, e = 0, sum = 0;
//     while (e < n)
//     {
//         sum += a[e];
//         e++;
//         while (e < n && (h[e - 1] % h[e] == 0) && e - s + 1 <= mid)
//         {
//             sum += a[e];
//             e++;
//         }
//         if (e - s == mid)
//         {
//             if (sum <= k)
//             {
//                 // cout << s << " " << e << endl;
//                 return true;
//             }
//             // s = e;
//             sum -= a[s];
//             s++;
//             // if(e < n) sum = a[e];
//         }
//         else
//         {
//             s = e;
//             sum = 0;
//         }
//     }
//     return false;
// }

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), h(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> h[i];
        // int s = 0, e = n, mid, ans;
        // while (s <= e)
        // {
        //     mid = s + (e - s) / 2;
        //     if (isPossible(a, h, n, k, mid))
        //     {
        //         ans = mid;
        //         s = mid + 1;
        //     }
        //     else
        //         e = mid - 1;
        // }
        int mini = *min_element(a.begin(), a.end());
        if (mini > k)
            cout << "0" << endl;
        else
        {
            int ans = 1;
            int s = 0, e = 0, sum = 0;
            while (e < n)
            {
                sum += a[e];
                e++;
                while (e < n && (h[e - 1] % h[e] == 0))
                {
                    sum += a[e];
                    e++;
                    if (sum <= k)
                    {
                        // cout << s << " " << e << endl;
                        ans = max(ans, e - s);
                    }
                    else
                    {
                        sum -= a[s];
                        s++;
                    }
                }
                s = e;
                sum = 0;
                // sum -= a[s];
                // s++;
            }
            cout << ans << endl;
        }
        cout << endl;
    }
}