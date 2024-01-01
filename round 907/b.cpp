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
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        map<int, set<int>> mp;
        for (int j = 0; j < n; j++)
        {
            int maxi = 0;
            for (int i = 1; i <= 30; i++)
            {
                int p = pow(2, i);

                if (a[j] % p == 0)
                    maxi = i;
            }
            mp[maxi].insert(j);
        }
        int x, y;
        while (q--)
        {
            cin >> x;
            int p = pow(2, x - 1);
            // cout << p << endl;
            for (int j = x; j <= 30; j++)
            {
                for (auto i : mp[j])
                {
                    // cout << i << " ";
                    a[i] += p;
                    if (x > 1)
                        mp[x - 1].insert(i);
                }
                // cout << endl;
                mp.erase(j);
            }
        }
        // cout << endl;
        for (auto i : a)
            cout << i << " ";
        cout << endl;
    }
}