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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        // for (auto i : a)
        //     cout << i << " ";
        // cout << endl;

        int max_sum = 0, curr_sum = 0;
        for (int i = 0; i < n; i++)
        {
            curr_sum += a[i];
            if (curr_sum > max_sum)
                max_sum = curr_sum;
            if (curr_sum < 0)
                curr_sum = 0;
        }

        sum = sum % mod;
        while (k--)
        {
            sum = (sum + max_sum) % mod;
            max_sum = (2 * max_sum) % mod;
        }
        sum = (sum + mod) % mod;
        cout << sum << endl;
    }
}