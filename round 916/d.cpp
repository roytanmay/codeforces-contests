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
        // vector<int> a(n), b(n), c(n);
        int temp;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> a, b, c;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a.push({temp, i});
            if ((int)a.size() > 3)
                a.pop();
        }
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            b.push({temp, i});
            if ((int)b.size() > 3)
                b.pop();
        }
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            c.push({temp, i});
            if ((int)c.size() > 3)
                c.pop();
        }

        vector<pair<int, int>> av, bv, cv;
        while ((int)a.size() > 0)
        {
            av.push_back({a.top().first, a.top().second});
            a.pop();
        }
        while ((int)b.size() > 0)
        {
            bv.push_back({b.top().first, b.top().second});
            b.pop();
        }
        while ((int)c.size() > 0)
        {
            cv.push_back({c.top().first, c.top().second});
            c.pop();
        }

        int ans = 0;
        for (int i = 2; i >= 0; i--)
        {
            for (int j = 2; j >= 0; j--)
            {
                if (av[i].second != bv[j].second)
                {
                    for (int k = 2; k >= 0; k--)
                    {
                        if (av[i].second != bv[j].second && (av[i].second != cv[k].second && bv[j].second != cv[k].second))
                        {
                            ans = max(ans, av[i].first + bv[j].first + cv[k].first);
                        }
                    }
                }
            }
        }

        cout << ans << endl;
    }
}