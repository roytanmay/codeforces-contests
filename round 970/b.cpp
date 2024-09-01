#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "Yes" << endl
#define pno cout << "No" << endl

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int m = sqrt(n);
        if (m * m != n)
            pno;
        else
        {
            vector<vector<char>> mat(m, vector<char>(m));
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < m; j++)
                    mat[i][j] = s[i * m + j];
            }
            bool f = true;
            for (int j = 0; j < m; j++)
            {
                if (mat[0][j] != '1')
                {
                    f = false;
                    break;
                }
                if (mat[m - 1][j] != '1')
                {
                    f = false;
                    break;
                }
            }

            for (int i = 0; i < m; i++)
            {
                if (mat[i][0] != '1')
                {
                    f = false;
                    break;
                }
                if (mat[i][m - 1] != '1')
                {
                    f = false;
                    break;
                }
            }

            for (int i = 1; i < m - 1; i++)
            {
                for (int j = 1; j < m - 1; j++)
                {
                    if (mat[i][j] != '0')
                    {
                        f = false;
                        break;
                    }
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