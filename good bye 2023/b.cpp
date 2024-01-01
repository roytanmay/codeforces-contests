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
        int g = __gcd(a, b), l = (a * b) / g;
        int maxi = max(a, b), mini = min(a, b);
        if (mini == 1)
            cout << maxi * maxi << endl;
        else if (maxi == l)
        {
            if (maxi % mini == 0)
                cout << (maxi / mini) * l << endl;
            else
                cout << 2 * l << endl;
        }
        else
            cout << l << endl;
        // cout << endl;
    }
}