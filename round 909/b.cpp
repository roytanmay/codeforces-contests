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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i)
                continue;
            int maxi = 0, mini = LLONG_MAX;
            int j = 0;
            while (j < n)
            {
                int sum = 0;
                for (int k = 0; k < i; k++)
                {
                    sum += a[j];
                    j++;
                }
                maxi = max(maxi, sum);
                mini = min(mini, sum);
            }
            // cout << maxi << " " << mini << endl;
            ans = max(ans, maxi - mini);

            j = 0;
            maxi = 0;
            mini = LLONG_MAX;
            while (j < n)
            {
                int sum = 0;
                for (int k = 0; k < n / i; k++)
                {
                    sum += a[j];
                    j++;
                }
                maxi = max(maxi, sum);
                mini = min(mini, sum);
            }
            ans = max(ans, maxi - mini);
        }
        cout << ans << endl;
    }
}