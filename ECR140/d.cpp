#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll c0 = 0, c1 = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
            c0++;
        else
            c1++;
    }

    ll moreThan = (int)pow(2, c0) - 1, lessThan = (int)pow(2, c1) - 1;

    for (ll i = lessThan + 1; i <= (ll)pow(2, n) - moreThan; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}