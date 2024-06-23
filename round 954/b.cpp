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
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        }
        int dr[4] = {-1, 0, 1, 0}, dc[4] = {0, 1, 0, -1};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                bool f = true;
                int maxi = 0;

                for (int d = 0; d < 4; d++)
                {
                    int nr = i + dr[d], nc = j + dc[d];
                    if (nr >= 0 && nr < n && nc >= 0 && nc < m)
                    {
                        if (mat[nr][nc] < mat[i][j])
                            maxi = max(maxi, mat[nr][nc]);
                        else
                            f = false;
                    }
                }

                if (f && maxi > 0)
                    mat[i][j] = maxi;
            }
        }

        for (auto i : mat)
        {
            for (auto j : i)
                cout << j << " ";
            cout << endl;
        }
    }
}