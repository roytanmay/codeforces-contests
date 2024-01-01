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

        bool flag = false;
        ll x = 0, y = 0;
        for (auto i : str)
        {
            if (i == 'L')
                x -= 1;
            else if (i == 'R')
                x += 1;
            else if (i == 'U')
                y += 1;
            else if (i == 'D')
                y -= 1;

            if (x == 1 && y == 1)
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}