#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, time;
        cin >> n >> time;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < n; i++)
        {
            a[i] += i;
            if (a[i] <= time)
            {
                pq.push({b[i], i});
            }
        }
        if (pq.size() == 0)
            cout << "-1" << endl;
        else
            cout << pq.top().second + 1 << endl;
        cout << endl;
    }
}