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

        vector<vector<int>> a(n, vector<int>(m)), b(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < m; j++)
                a[i][j] = s[j] - '0';
        }

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < m; j++)
                b[i][j] = s[j] - '0';
        }

        bool f = true;

        for (int i = 0; i < n; i++)
        {
            int suma = 0, sumb = 0;
            for (int j = 0; j < m; j++)
            {
                suma += a[i][j];
                sumb += b[i][j];
            }

            // cout << suma << " " << sumb << endl;

            if (suma % 3 != sumb % 3)
                f = false;
            if (!f)
                break;
        }

        for (int j = 0; j < m; j++)
        {
            int suma = 0, sumb = 0;
            for (int i = 0; i < n; i++)
            {
                suma += a[i][j];
                sumb += b[i][j];
            }

            if (suma % 3 != sumb % 3)
                f = false;
            if (!f)
                break;
        }

        if (f)
            pyes;
        else
            pno;
        // cout << endl;
    }
}