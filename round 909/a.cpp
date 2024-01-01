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
        if ((n - 1) % 3 == 0 || (n + 1) % 3 == 0)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
        // cout << endl;
    }
}