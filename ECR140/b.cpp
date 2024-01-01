#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t = 1;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin() + 1, v.end());

        long long ans = v[0];
        for (long long i = 1; i < n; i++)
        {
            if (v[i] > ans)
                ans = (ans + v[i] + 1) / 2;
        }

        cout << ans << endl;
    }

    return 0;
}