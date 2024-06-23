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

        string s;
        cin >> s;

        vector<int> ind(m);
        for (int i = 0; i < m; i++)
            cin >> ind[i];

        string c;
        cin >> c;

        sort(ind.begin(), ind.end());
        sort(c.begin(), c.end());

        int i = 0, j = 0;
        while (i < m)
        {
            int index = ind[i];
            i++;
            while (i < m && ind[i] == index)
                i++;
            s[index - 1] = c[j];
            j++;
        }

        cout << s << endl;
    }
}