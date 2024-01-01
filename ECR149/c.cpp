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
        int n = s.size(), i = 0;
        while (i < n)
        {
            if (s[i] == '?')
            {
                if (i == 0)
                    s[i] = '0';
                else if (s[i - 1] == '0')
                    s[i] = '0';
                else
                    s[i] = '1';
            }
            i++;
        }
        cout << s << endl;
        cout << endl;
    }
}