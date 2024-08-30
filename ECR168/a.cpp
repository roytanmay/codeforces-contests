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
        int n = s.size(), ind = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                ind = i;
                break;
            }
        }
        string ans = "";
        if (ind == 0)
        {
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                if (ch != s[0])
                {
                    ans = ch + s;
                    break;
                }
            }
        }
        else
        {
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                if (ch != s[ind])
                {
                    ans = s.substr(0, ind) + ch + s.substr(ind, n - ind);
                    break;
                }
            }
        }
        cout << ans << endl;
        cout << endl;
    }
}