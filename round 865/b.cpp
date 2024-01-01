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
        vector<vector<int>> v(2, vector<int>(n, 0));
        v[1][n - 1] = 2 * n;
        v[0][0] = 2 * n - 1;
        int a = 2 * n - 2, b = 1;
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0)
            {
                v[0][i] = a - 1;
                v[1][i - 1] = a;
                a -= 2;
            }
            else
            {
                v[0][i] = b;
                v[1][i - 1] = b + 1;
                b += 2;
            }
        }
        for (auto i : v[0])
            cout << i << " ";
        cout << endl;
        for (auto i : v[1])
            cout << i << " ";
        cout << endl;
        cout << endl;
    }
}