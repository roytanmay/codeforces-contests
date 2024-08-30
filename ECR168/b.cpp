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
        vector<string> grid(2);
        cin >> grid[0] >> grid[1];
        int ans = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (grid[0][i] == 'x')
                continue;
            if (grid[0][i - 1] == '.' && grid[0][i + 1] == '.' && grid[1][i - 1] == 'x' && grid[1][i + 1] == 'x' && grid[1][i] == '.')
            {
                ans++;
            }
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (grid[1][i] == 'x')
                continue;
            if (grid[1][i - 1] == '.' && grid[1][i + 1] == '.' && grid[0][i - 1] == 'x' && grid[0][i + 1] == 'x' && grid[0][i] == '.')
            {
                ans++;
            }
        }
        cout << ans << endl;
        cout << endl;
    }
}