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
        int n, k;
        cin >> n >> k;
        int c = k / (n - 1), t;
        if (k % (n - 1))
            t = k + c;
        else
            t = k + c - 1;
        cout << t << endl;
        cout << endl;
    }
}