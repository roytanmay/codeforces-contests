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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        vector<pair<int, int>> p;
        for (int i = 0; i < n; i++)
        {
            p.push_back(make_pair(v[i], i));
        }
        sort(p.begin(), p.end());
        int c = 0, i = 0;
        while (i < n)
        {
            while (i < n - 1 && p[i].second + 1 == p[i + 1].second)
                i++;
            c++;
            i++;
        }
        if (c <= k)
            pyes;
        else
            pno;
        cout << endl;
    }
}