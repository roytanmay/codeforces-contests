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
        int a = 0, b = 1;
        int i = 0, j = 0;
        while (i < n)
        {
            a = b;
            j = 0;
            while (j < m)
            {
                v[i][j++] = a++;
            }
            b = b + (1 << 10);
            i++;
        }
        cout << n * m << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}