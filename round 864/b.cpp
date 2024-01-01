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
        int n, k;
        cin >> n >> k;
        vector<vector<int>> v;
        int x;
        for (int i = 0; i < n; i++)
        {
            vector<int> temp;
            for (int j = 0; j < n; j++)
            {
                cin >> x;
                temp.push_back(x);
            }
            v.push_back(temp);
        }
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[i][j] != v[n - i - 1][n - j - 1])
                    c++;
            }
        }
        c /= 2;
        int m = n % 2 ? 1 : 2;
        if (c == k)
            pyes;
        else if (c < k && (k - c) % m == 0)
            pyes;
        else
            pno;
        cout << endl;
    }
}