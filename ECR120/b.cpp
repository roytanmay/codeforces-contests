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

        vector<ll> p(n);
        for (ll i = 0; i < n; i++)
            cin >> p[i];

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

        if (c0 == n || c1 == n)
        {
            for (ll i = 0; i < n; i++)
            {
                cout << p[i] << " ";
            }
            cout << endl;
        }
        else
        {
            priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<>> like, dislike;
            for (ll i = 0; i < n; i++)
            {
                if (s[i] == '0')
                    dislike.push(make_pair(p[i], i));
                else
                    like.push(make_pair(p[i], i));
            }

            vector<ll> q(n);
            ll a = 1;
            while (!dislike.empty())
            {
                q[dislike.top().second] = a++;
                dislike.pop();
            }
            while (!like.empty())
            {
                q[like.top().second] = a++;
                like.pop();
            }

            for (ll i = 0; i < n; i++)
            {
                cout << q[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}