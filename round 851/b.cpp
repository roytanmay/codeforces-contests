#include <bits/stdc++.h>
using namespace std;

#define ll long long
int mod = 1000000007;

ll sumOfDigits(ll x)
{
    ll res = 0;
    while (x)
    {
        res += (x % 10);
        x /= 10;
    }
    return res;
}

bool isAll9(ll n)
{
    while (n)
    {
        if (n % 10 != 9)
            return false;
        n /= 10;
    }
    return true;
}

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        if (n % 10 == 9)
        {
            string a = "", b = "";
            ll d, c = 0;
            while (n)
            {
                d = n % 10;
                if (d % 2)
                {
                    if (c % 2)
                    {
                        a += to_string(d / 2 + 1);
                        b += to_string(d / 2);
                    }
                    else
                    {
                        a += to_string(d / 2);
                        b += to_string(d / 2 + 1);
                    }
                    c++;
                }
                else
                {
                    a += to_string(d / 2);
                    b += to_string(d / 2);
                }
                n /= 10;
            }
            while (a.back() == '0')
                a.pop_back();
            while (b.back() == '0')
                b.pop_back();

            reverse(a.begin(), a.end());
            reverse(b.begin(), b.end());
            cout << a << " " << b << endl;
        }
        else
        {
            ll x = (n / 2) + (n % 2), y = n - x;
            cout << x << " " << y << endl;
        }
        cout << endl;
    }

    return 0;
}