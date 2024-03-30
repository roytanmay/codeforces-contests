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
        string s, f;
        cin >> s >> f;

        int c0 = 0, c1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (s[i] != f[i])
                    c0++;
            }
            else
            {
                if (s[i] != f[i])
                    c1++;
            }
        }
        int maxi = max(c1, c0), mini = min(c1, c0);
        cout << maxi << endl;
    }
}