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
        string str;
        cin >> str;
        int c = (str[0] != 'a') + (str[1] != 'b') + (str[2] != 'c');
        if (c == 0 || c == 2)
            pyes;
        else
            pno;
        cout << endl;
    }
}