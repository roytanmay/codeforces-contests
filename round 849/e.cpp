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

        vector<int> v(n);
        ll sum = 0, count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
            {
                count++;
                v[i] = -v[i];
            }
            sum += v[i];
        }

        sort(v.begin(), v.end());

        if (count % 2)
            sum -= 2 * v[0];

        cout << sum << endl;
        cout << endl;
    }

    return 0;
}