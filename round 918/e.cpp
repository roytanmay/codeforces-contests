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
        unordered_map<int, int> mp;
        mp[0]++;
        int sum = 0;
        bool f = false;
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
                sum += a[i];
            else
                sum -= a[i];
            if (mp.count(sum))
            {
                f = true;
                break;
            }
            mp[sum]++;
        }
        if (f)
            pyes;
        else
            pno;
        // cout << endl;
    }
}