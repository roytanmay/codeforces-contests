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
        vector<vector<int>> m(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> m[i][j];
        }
        vector<int> a(n);
        bool f = true;
        for (int i = 0; i < n; i++)
        {
            int c = -1;
            for (int j = 0; j < n; j++)
            {
                if (j != i)
                {
                    if (c == -1)
                        c = m[i][j];
                    else
                        c = c & m[i][j];
                }
            }
            a[i] = c;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    if ((a[i] | a[j]) != m[i][j])
                    {
                        f = false;
                        break;
                    }
                }
            }
            if (!f)
                break;
        }
        if (n == 1)
        {
            pyes;
            cout << "7" << endl;
        }
        else if (f)
        {
            pyes;
            for (auto i : a)
                cout << i << " ";
            cout << endl;
        }
        else
            pno;
    }
}