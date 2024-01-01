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
        vector<vector<int>> v;
        int ind = -1, mini = INT_MAX, mini2 = mini;
        bool f = true;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            vector<int> temp(m);
            for (int j = 0; j < m; j++)
                cin >> temp[j];
            sort(temp.begin(), temp.end());
            v.push_back(temp);
            if (mini > temp[1])
            {
                mini = temp[1];
                ind = i;
            }
            mini2 = min(mini2, temp[0]);
        }

        if (n == 1)
            cout << v[0][0] << endl;
        else
        {
            int ans = mini2;
            for (int i = 0; i < n; i++)
            {
                if (i != ind)
                    ans += v[i][1];
            }
            cout << ans << endl;
        }
        cout << endl;
    }
}