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
        int a, b;
        cin >> a >> b;
        int n;
        if (a == 1 || b == 1)
        {
            cout << "1" << endl;
            cout << a << " " << b << endl;
        }
        else if(__gcd(a, b) > 1)
        {
            cout << "2" << endl;
            cout << "1 " << b - 1 << endl;
            cout << a << " " << b << endl;
        }
        else
        {
            cout << "1" << endl;
            cout << a << " " << b << endl;
        }
        cout << endl;
    }
}