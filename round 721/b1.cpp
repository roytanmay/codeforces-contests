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
        int c0 = 0;
        for (auto i : s)
        {
            if (i == '0')
                c0++;
        }
        if (c0 == 0)
            cout << "DRAW" << endl;
        else if (c0 == 1)
            cout << "BOB" << endl;
        else
        {
            if (n % 2 && s[n / 2] == '0')
                cout << "ALICE" << endl;
            else
                cout << "BOB" << endl;
        }
        cout << endl;
    }
}