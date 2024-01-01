#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

bool isPossible(vector<int> &v, int mid)
{
    int d = 0;
    unordered_map<int, int> mp;
    int ind = -1, end = 0;
    for (int i = 0; i <= mid; i++)
    {
        ind = i;
        if (v[i] > 0)
            mp[i] = d + v[i];
        d++;
    }
    // d--;
    for (int i = ind - 1; i >= 0; i--)
    {
        if (mp.count(i) && mp[i] <= d)
            return false;
        d++;
    }

    return true;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(1e5 + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int d, s;
            cin >> d >> s;
            // v[d] = make_pair(d, s);
            if (v[d])
                v[d] = min(v[d], s);
            else
                v[d] = s;
        }
        // sort(v.begin(), v.end());
        int s = 1, e = 1e5, mid, ans = 0;
        while (s <= e)
        {
            mid = s + (e - s) / 2;
            if (isPossible(v, mid))
            {
                ans = mid;
                s = mid + 1;
            }
            else
                e = mid - 1;
        }
        // cout << isPossible(v, 2) << endl;
        cout << ans << endl;
        cout << endl;
    }
}