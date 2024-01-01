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
        int n, d;
        cin >> n >> d;
        string s;
        cin >> s;
        string ans = "";
        int i = 0;
        while (i < n)
        {
            if (s[i] - '0' >= d)
            {
                ans += s[i];
                i++;
            }
            else
                break;
        }
        ans += to_string(d);
        while (i < n)
        {
            ans += s[i];
            i++;
        }
        cout << ans << endl;
        cout << endl;
    }
}