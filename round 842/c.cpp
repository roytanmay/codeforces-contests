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

        vector<ll> a(n), p(n), q(n), pair(n + 1, 0);
        unordered_map<ll, ll> freq;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        priority_queue<ll> pq;
        for (ll i = 1; i <= n; i++)
        {
            if (freq[i] == 0)
                pq.push(i);
        }

        bool flag = false;
        for (ll i = n; i >= 1; i--)
        {
            if (freq[i] == 1)
                pair[i] = i;
            else if (freq[i] == 2)
            {
                if (pq.top() < i)
                {
                    pair[i] = pq.top();
                    pair[pq.top()] = i;
                    pq.pop();
                }
                else
                {
                    flag = true;
                    break;
                }
            }
            else if (freq[i] > 2)
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;

            vector<bool> visited(n + 1, false);
            for (ll i = 0; i < n; i++)
            {
                if (!visited[a[i]])
                {
                    p[i] = a[i];
                    q[i] = pair[a[i]];
                    visited[a[i]] = true;
                }
                else
                {
                    q[i] = a[i];
                    p[i] = pair[a[i]];
                }
            }

            for (auto i : p)
                cout << i << " ";
            cout << endl;
            for (auto i : q)
                cout << i << " ";
            cout << endl;
        }
    }

    return 0;
}