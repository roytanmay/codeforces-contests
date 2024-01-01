#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

static bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<pair<int, int>> temp;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % k == 0)
                v.push_back(i);
            else
                temp.push_back({a[i] % k, i});
        }
        sort(temp.begin(), temp.end(), cmp);
        for (auto [h, i] : temp)
        {
            v.push_back(i);
        }
        for (auto i : v)
            cout << i+1 << " ";
        cout << endl;
        cout << endl;
    }
}