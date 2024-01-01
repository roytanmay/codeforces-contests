#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t = 1;
    cin >> t;

    long long p[100001];
    for (long long i = 0; i < 100001; i++)
        p[i] = 1;

    for (long long i = 2; i <= 10000; i++)
    {
        if (p[i] == 1)
        {
            for (long long j = i * i; j <= 100000; j = j + i)
            {
                p[j] = 0;
            }
        }
    }

    vector<long long> pf;
    for (long long i = 2; i <= 100000; i++)
    {
        if (p[i] == 1)
            pf.push_back(i);
    }

    long long pfn = pf.size();

    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
            cin >> v[i];

        bool flag = false;

        unordered_map<long long, bool> mp;

        for (long long i = 0; i < n; i++)
        {
            long long j;
            for (j = 0; j < pfn; j++)
            {
                if (pf[j] * pf[j] > v[i])
                    break;

                if (v[i] % pf[j] == 0)
                {
                    if (mp[pf[j]])
                    {
                        flag = true;
                        break;
                    }
                    else
                        mp[pf[j]] = true;

                    while (v[i] % pf[j] == 0)
                        v[i] /= pf[j];
                }
            }

            if (v[i] > 1 && mp[v[i]])
            {
                flag = true;
                break;
            }
            else
                mp[v[i]] = true;

            if (flag)
                break;
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}