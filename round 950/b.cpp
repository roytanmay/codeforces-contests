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
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int val = a[f - 1];
        k--;
        sort(a.rbegin(), a.rend());
        // int s = lower_bound(a.begin(), a.end(), val) - a.begin();
        // int e = upper_bound(a.begin(), a.end(), val) - a.begin();
        int s = 0, e = s;
        while (s < n && a[s] > val)
            s++;
        e = s;
        while (e < n && a[e] == val)
            e++;
        // e--;

        if (k >= e-1)
            pyes;
        else if (k >= s && k < e-1)
        {
            if (e - s == 1)
                pyes;
            else
                cout << "MAYBE" << endl;
        }
        else
            pno;
        // cout << endl;
    }
}