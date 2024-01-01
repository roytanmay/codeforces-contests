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
        vector<vector<char>> v(10, vector<char>(10));
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
                cin >> v[i][j];
        }
        int ans = 0;
        for (int c = 0; c < 5; c++)
        {
            for (int j = c; j < 10 - c; j++)
            {
                if (v[c][j] == 'X')
                    ans += (c + 1);
                if (v[9 - c][j] == 'X')
                    ans += (c + 1);
            }
            for (int i = c + 1; i < 10 - c - 1; i++)
            {
                if (v[i][c] == 'X')
                    ans += (c + 1);
                if (v[i][9 - c] == 'X')
                    ans += (c + 1);
            }
        }
        cout << ans << endl;
        cout << endl;
    }
}