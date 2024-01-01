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
        vector<int> a1(n), a2(n);
        // vector<int> maxi(n), mini(n);
        for (int i = 0; i < n; i++)
            cin >> a1[i];
        for (int i = 0; i < n; i++)
            cin >> a2[i];
        // maxi[0] = a1[0];
        // mini[n - 1] = a1[n - 1];
        // for (int i = 1; i < n; i++)
        // {
        //     maxi[i] = max(maxi[i - 1], a1[i]);
        // }
        // for (int i = n - 2; i >= 0; i--)
        // {
        //     mini[i] = min(mini[i + 1], a1[i]);
        // }
        int s = 0, e = n - 1, as = -1, ae = -1;
        // while (s < e)
        // {
        //     if (a2[s] == a1[s])
        //         s++;
        //     if (a2[e] == a1[e])
        //         e--;
        // }
        while (s < n && a2[s] == a1[s])
            s++;
        while (e >= 0 && a2[e] == a1[e])
            e--;

        // int i = 0;
        // while (i < n)
        // {
        //     s = i;
        //     while (i < n - 1 && a2[i] <= a2[i + 1])
        //         i++;
        //     e = i;
        //     // cout << s << " " << e << endl;
        //     if (e - s + 1 > ae - as + 1)
        //     {
        //         ae = e;
        //         as = s;
        //     }
        //     i++;
        // }
        // int maxi = a2[e], mini = a2[s];

        // while (s > 0 && a1[s - 1] <= mini)
        // {
        //     s--;
        //     mini = a1[s - 1];
        // }
        // // if (s == -1)
        // //     s++;
        // while (e < n - 1 && a1[e + 1] >= maxi)
        // {
        //     e++;
        //     maxi = a1[e + 1];
        // }
        // // if (e == n)
        // //     e--;

        while (s > 0 && a1[s - 1] == a2[s - 1] && a2[s - 1] <= a2[s])
            s--;
        while (e < n - 1 && a1[e + 1] == a2[e + 1] && a2[e + 1] >= a2[e])
            e++;
        // if (as == -1)
        // {
        //     as = 0;
        //     ae = 0;
        // }
        cout << s + 1 << " " << e + 1 << endl;
        cout << endl;
    }
}