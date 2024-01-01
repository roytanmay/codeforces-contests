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

        if (n < 4)
            cout << "NO" << endl;
        else
        {
            ll i = 0, k;
            bool f = true;
            while (i < n && (s[i] == 'm' || s[i] == 'M'))
                i++;
            if (i == 0 || i >= n)
                cout << "NO" << endl;
            else
            {
                k = i;
                while (i < n && (s[i] == 'e' || s[i] == 'E'))
                    i++;
                if (i == k || i >= n)
                    cout << "NO" << endl;
                else
                {
                    k = i;
                    while (i < n && (s[i] == 'o' || s[i] == 'O'))
                        i++;
                    if (i == k || i >= n)
                        cout << "NO" << endl;
                    else
                    {
                        k = i;
                        while (i < n && (s[i] == 'w' || s[i] == 'W'))
                            i++;
                        if (i == k || i < n)
                            cout << "NO" << endl;
                        else
                            cout << "YES" << endl;
                    }
                }
            }
        }
    }

    return 0;
}