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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> v[i][j];
        }
        int ans = 0;
        for (int j = 0; j < m; j++)
        {
            vector<int> temp, psum(n);
            for (int i = 0; i < n; i++)
            {
                temp.push_back(v[i][j]);
            }
            sort(temp.begin(), temp.end());
            psum[0] = temp[0];
            for (int k = 1; k < n; k++)
                psum[k] = psum[k - 1] + temp[k];
            for (int k = 0; k < n; k++)
            {
                ans += (temp[k] * (k + 1) - psum[k]);
            }
        }
        cout << ans << endl;
        cout << endl;
    }
}