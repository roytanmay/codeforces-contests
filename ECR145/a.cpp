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
        sort(s.begin(), s.end());
        if (s[0] == s[3])
            cout << "-1" << endl;
        else if ((s[0] == s[1] && s[1] == s[2]) || (s[1] == s[2] && s[2] == s[3]))
            cout << "6" << endl;
        else if (s[0] == s[1] || s[2] == s[3])
            cout << "4" << endl;
        else
            cout << "4" << endl;
        cout << endl;
    }
}