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

        vector<ll> p(n);
        for (ll i = 0; i < n; i++)
            cin >> p[i];

        deque<ll> dq;
        dq.push_back(p[0]);
        for (ll i = 1; i < n; i++)
        {
            if (dq.front() >= p[i])
                dq.push_front(p[i]);
            else
                dq.push_back(p[i]);
        }

        while (!dq.empty())
        {
            cout << dq.front() << " ";
            dq.pop_front();
        }
        cout << endl;
    }

    return 0;
}