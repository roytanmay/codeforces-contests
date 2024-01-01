#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

vector<int> freq(1e6 + 1, 0);

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
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int num = a[i], r = 2;
            while (num / r > 0 && num * r < 1e6 + 1)
            {
                int p = num / r;
                if (p * r == num)
                {
                    ans += (freq[p] * freq[num * r]);
                }
                r++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int c = freq[a[i]];
            if (c >= 3)
            {
                ans += (c * (c - 1) * (c - 2));
            }
            freq[a[i]] = 0;
        }
        cout << ans << endl;
        cout << endl;
    }
}