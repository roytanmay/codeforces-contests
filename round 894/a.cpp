#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

char nextChar(char ch)
{
    if (ch == 'v')
        return 'i';
    if (ch == 'i')
        return 'k';
    if (ch == 'k')
        return 'a';
    if (ch == 'a')
        return '@';
    return '#';
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        char ch = 'v';
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i][j] == ch)
                {
                    ch = nextChar(ch);
                    break;
                }
            }
            // cout << ch << endl;
            if (ch == '@')
                break;
        }
        if (ch == '@')
            pyes;
        else
            pno;
        cout << endl;
    }
}