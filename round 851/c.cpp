#include <bits/stdc++.h>
using namespace std;

#define ll long long
int mod = 1000000007;

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        if (n % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            ll t1 = 1, t2 = 2 * n;
            while (t1 <= n)
            {
                cout << t1 << " " << t2 << endl;
                t1 += 2;
                t2--;
            }
            t1 = n - 1;
            t2 = n + 1;
            while (t1 >= 2)
            {
                cout << t1 << " " << t2 << endl;
                t1 -= 2;
                t2++;
            }
        }
        // cout << endl;
    }

    return 0;
}