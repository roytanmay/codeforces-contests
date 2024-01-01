#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int delRow[4] = {-1, 0, 1, 0};
int delCol[4] = {0, 1, 0, -1};

int bfs(int &n, int &m, vector<vector<int>> &grid, int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    int res = grid[i][j];
    grid[i][j] = 0;
    while (!q.empty())
    {
        int r = q.front().first, c = q.front().second;
        q.pop();
        for (int d = 0; d < 4; d++)
        {
            int nr = r + delRow[d], nc = c + delCol[d];
            if (nr >= 0 && nr < n && nc >= 0 && nc < m && grid[nr][nc] != 0)
            {
                res += grid[nr][nc];
                grid[nr][nc] = 0;
                q.push({nr, nc});
            }
        }
    }
    return res;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> grid[i][j];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] != 0)
                    ans = max(ans, bfs(n, m, grid, i, j));
            }
        }
        cout << ans << endl;
        cout << endl;
    }
}