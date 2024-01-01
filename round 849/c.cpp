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
        string str;
        cin >> str;

        ll count = 0;
        ll s = 0, e = n - 1;
        while (s < e)
        {
            if (str[s] != str[e])
            {
                count += 2;
                s++;
                e--;
            }
            else
                break;
        }

        cout << n - count << endl;
        // cout << endl;
    }

    return 0;
}