#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        if (n == 3)
            cout << "NO" << endl;
        else if (n % 2 == 0)
        {
            cout << "YES" << endl;
            for (ll i = 0; i < n; i++)
            {
                if (i % 2 == 1)
                    cout << "-1 ";
                else
                    cout << "1 ";
            }
            cout << endl;
        }
        else
        {
            bool flag = true;
            ll p = 0, x, asum, tsum;
            for (ll i = 1; i <= 5000; i++)
            {
                x = ((n - 1) * i) / (n - 3);
                tsum = i - x;
                asum = ((n + 1) / 2) * i - (n / 2) * x;

                if (x <= 5000 && tsum == asum)
                {
                    p = i;
                    x = -x;
                    break;
                }
            }

            if (p == 0)
                flag = false;

            if (flag)
            {
                cout << "YES" << endl;
                for (ll i = 0; i < n; i++)
                {
                    if (i % 2 == 1)
                        cout << x << " ";
                    else
                        cout << p << " ";
                }
                cout << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}