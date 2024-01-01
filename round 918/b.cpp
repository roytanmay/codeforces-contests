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
        vector<vector<char>> mat(3, vector<char>(3));
        int r, c;
        int A = 0, B = 0, C = 0;
        char ans;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> mat[i][j];
                if (mat[i][j] == '?')
                {
                    r = i;
                    c = j;
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (mat[r][i] == 'A')
                A++;
            else if (mat[r][i] == 'B')
                B++;
            else if (mat[r][i] == 'C')
                C++;

            if (mat[i][c] == 'A')
                A++;
            else if (mat[i][c] == 'B')
                B++;
            else if (mat[i][c] == 'C')
                C++;
        }

        if (A == 0)
            cout << 'A' << endl;
        else if (B == 0)
            cout << 'B' << endl;
        else
            cout << 'C' << endl;
        // cout << endl;
    }
}