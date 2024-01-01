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
        string s;
        cin >> s;
        int n = s.size(), c = 0, ans = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                c++;
                if (i == 0)
                    ans *= 9;
                else
                    ans *= 10;
            }
        }
        if (s[0] == '0')
            cout << "0" << endl;
        else if (c == 0)
            cout << "1" << endl;
        else
            cout << ans << endl;
        cout << endl;
    }
}