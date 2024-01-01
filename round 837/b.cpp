#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        long long n, m;
        cin >> n >> m;

        vector<long long> v(n + 1, n + 1);
        long long x, y;

        while (m--)
        {
            cin >> x >> y;
            if (x > y)
                swap(x, y);
            v[x] = min(v[x], y);
        }

        for (long long i = n-1; i >= 1; i--)
        {
            v[i] = min(v[i], v[i + 1]);
        }

        long long ans = 0;
        for (long long i = 1; i <= n; i++)
        {
            ans += (v[i] - i);
        }

        cout << ans << endl;
    }

    return 0;
}