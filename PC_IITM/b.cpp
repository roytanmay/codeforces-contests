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
        string s;
        cin >> s;

        bool f = false;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                f = true;
                break;
            }
        }

        if (f || n == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}