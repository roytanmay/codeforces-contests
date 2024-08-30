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

        string s1, s2;
        cin >> s1;
        cin >> s2;

        vector<vector<char>> grid(2, vector<char>(n));
        for (int i = 0; i < n; i++)
            grid[0][i] = s1[i];
        for (int i = 0; i < n; i++)
            grid[1][i] = s2[i];

        if (grid[1][n - 2] == '<')
            pno;
        else
        {
            int i = 1, j = n - 2;
            bool f = true;

            while (j >= 1)
            {
                if (grid[(i + 1) % 2][j - 1] == '>')
                {
                    i = (i + 1) % 2;
                    j -= 1;
                }
                else if (j > 1 && grid[i][j - 2] == '>')
                    j -= 2;
                else
                {
                    f = false;
                    break;
                }
            }

            if (f)
                pyes;
            else
                pno;
        }
        // cout << endl;
    }
}