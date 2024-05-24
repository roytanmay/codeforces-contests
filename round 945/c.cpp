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
        vector<int> p(n);
        vector<pair<int, int>> odd, even;
        int ind = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            if (p[i] == 1)
                ind = i;
            if (i % 2 == 0)
                even.push_back({p[i], i});
            else
                odd.push_back({p[i], i});
        }

        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        int num = n;

        if (ind % 2 == 0)
        {
            for (auto i : odd)
                p[i.second] = num--;
            for (auto i : even)
                p[i.second] = num--;
        }
        else
        {
            for (auto i : even)
                p[i.second] = num--;
            for (auto i : odd)
                p[i.second] = num--;
        }

        for (auto i : p)
            cout << i << " ";
        cout << endl;
    }
}