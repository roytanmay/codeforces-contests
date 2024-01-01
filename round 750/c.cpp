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
        string s;
        cin >> s;
        int ans = 1e9;
        for (char c = 'a'; c <= 'z'; c++)
        {
            int st = 0, e = n - 1, count = 0;
            bool f = true;
            while (st < e)
            {
                if (s[st] == s[e])
                {
                    st++;
                    e--;
                }
                else if (s[st] == c)
                {
                    st++;
                    count++;
                }
                else if (s[e] == c)
                {
                    e--;
                    count++;
                }
                else
                {
                    f = false;
                    break;
                }
            }
            if (f)
                ans = min(ans, count);
        }
        if (ans == 1e9)
            ans = -1;
        cout << ans << endl;
        cout << endl;
    }
}