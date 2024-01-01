#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        if (n == k)
        {
            for (ll i = 1; i <= n; i++)
                cout << i << " ";
            cout << endl;
        }
        else
        {
            ll maxi = n, mini = 1;
            ll len = n / 2;
            while (len--)
            {
                cout << maxi << " " << mini << " ";
                maxi--;
                mini++;
            }

            if (n % 2)
                cout << maxi;
            cout << endl;
        }
    }
    return 0;
}