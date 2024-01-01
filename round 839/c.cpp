#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll k, n;
        cin >> k >> n;

        if (k == n)
        {
            for (ll i = 1; i <= n; i++)
                cout << i << " ";
            cout << endl;
        }
        else
        {
            ll t = 1, sum = 1, count = 0;
            while (sum < n)
            {
                sum += t;
                count++;
                t++;
            }

            if (sum > n)
            {
                t--;
                sum -= t;
                count--;
            }

            if(sum == n && k>count+1) count--;

            while (sum < n && (sum + (k - count - 1) > n))
            {
                count--;
                t--;
                sum -= t;
            }

            if (k == 2)
                count = 1;
            else if (n - k == 1)
                count = 2;

            // cout << count << endl;
            ll a = 1, b = 1;
            for (ll i = 0; i < k; i++)
            {
                cout << a << " ";
                if (count)
                {
                    a += b;
                    b++;
                    count--;
                }
                else
                    a++;
            }
            cout << endl;
        }
    }

    return 0;
}