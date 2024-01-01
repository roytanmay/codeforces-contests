#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int m;
        cin >> m;
        vector<vector<int>> v;
        for (int i = 0; i < m; i++)
        {
            int n;
            cin >> n;
            vector<int> a(n);
            for (int j = 0; j < n; j++)
                cin >> a[j];
            v.push_back(a);
        }
        vector<int> ans;
        vector<int> freq(50001, 0);
        for (int i = m - 1; i >= 0; i--)
        {
            bool f = true;
            for (int j = 0; j < v[i].size(); j++)
            {
                if (freq[v[i][j]] == 0 && f)
                {
                    ans.push_back(v[i][j]);
                    f = false;
                }
                freq[v[i][j]]++;
            }
        }
        if (ans.size() != m)
            cout << "-1" << endl;
        else
        {
            reverse(ans.begin(), ans.end());
            for (auto i : ans)
                cout << i << " ";
            cout << endl;
        }
        cout << endl;
    }
}