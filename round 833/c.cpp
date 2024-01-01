#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long arr[n];
        vector<long long> zeros;

        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] == 0)
                zeros.push_back(i);
        }

        long long score = 0;
        for (long long i = 0; i < zeros.size(); i++)
        {
            long long s = zeros[i], e;
            if (i == zeros.size() - 1)
                e = n - 1;
            else
                e = zeros[i + 1] - 1;

            long long sum = 0, maxi = 0;
            unordered_map<long long, long long> mp;

            for (long long j = s; j <= e; j++)
            {
                sum += arr[j];
                mp[sum]++;
                maxi = max(maxi, mp[sum]);
            }

            score += maxi;
        }

        long long s = 0, e, sum = 0;
        if (zeros.empty())
            e = n - 1;
        else
            e = zeros[0] - 1;

        for (long long i = s; i <= e; i++)
        {
            sum += arr[i];
            if (sum == 0)
                score++;
        }

        cout << score << endl;
    }

    return 0;
}