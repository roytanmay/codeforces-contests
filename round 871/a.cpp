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
        string s2 = "codeforces";
        int c = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != s2[i])
                c++;
        }
        cout << c << endl;
        cout << endl;
    }
}