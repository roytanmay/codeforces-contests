#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int count(int n)
{
    int res = 0;
    while (n)
    {
        n -= ((n + 1) / 2);
        res++;
    }
    return res;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<vector<int>> ind(26);
        for (int i = 0; i < n; i++)
        {
            ind[s[i] - 'a'].push_back(i);
        }
        int ans = INT_MAX;
        for (int i = 0; i < 26; i++)
        {
            int len = ind[i].size();
            if (len == 0)
                continue;
            int c = count(ind[i][0]);
            for (int j = 1; j < len; j++)
            {
                c = max(c, count(ind[i][j] - ind[i][j - 1] - 1));
            }
            c = max(c, count(n - ind[i][len - 1] - 1));
            // cout << i << " " << c << endl;
            ans = min(ans, c);
        }
        cout << ans << endl;
        cout << endl;
    }
}