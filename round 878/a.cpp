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
        int i = 0;
        string ans = "";
        while (i < n)
        {
            char ch = s[i];
            ans += ch;
            while (i < n - 1 && s[i + 1] != ch)
                i++;
            i += 2;
        }
        cout << ans << endl;
        cout << endl;
    }
}