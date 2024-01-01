#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int solve(vector<int> &maxi, vector<int> &mini, int &n)
{
    int res = LLONG_MAX;
    int i = n - 1;
    while (i >= 0 && maxi[i] >= mini[n - 1])
    {
        res = min(res, maxi[i] - mini[n - 1]);
        i--;
    }
    if (i >= 0)
        res = min(res, mini[n - 1] - maxi[i]);
    return res;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a, b;
        int x, y;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            a.push_back(make_pair(x, i));
            b.push_back(make_pair(y, i));
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int ans = LLONG_MAX;
        cout << endl;
    }
}