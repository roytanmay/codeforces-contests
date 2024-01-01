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

        sort(v.begin(), v.end());

        long long mini = v[0], maxi = v[n - 1];
        if (mini == maxi)
            cout << n * (n - 1) << endl;
        else
        {
            long long s = 0, e = n - 1;

            while (s < e)
            {
                if (v[s] == v[s + 1])
                    s++;
                else
                    break;
            }
            while (s < e)
            {
                if (v[e] == v[e - 1])
                    e--;
                else
                    break;
            }

            cout << (s + 1) * (n - e) * 2 << endl;
        }
    }

    return 0;
}