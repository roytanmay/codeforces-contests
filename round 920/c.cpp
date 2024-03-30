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
        int n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<int> m(n);
        for (int i = 0; i < n; i++)
            cin >> m[i];
        sort(m.begin(), m.end());

        int i = 0, t = 0;
        while (f > 0 && i < n)
        {
            int mini = min(b, (m[i] - t) * a);
            if (mini >= f)
                break;
            t = m[i];
            f -= mini;
            i++;
        }
        if (i == n)
            pyes;
        else
            pno;
    }
}