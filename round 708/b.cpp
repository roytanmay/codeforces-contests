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
        int n, m, a;
        cin >> n >> m;
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            freq[a % m]++;
        }
        int ans = 0;
        for (auto i : freq)
        {
            if (i.first == 0)
                ans++;
            else if (2 * i.first == m)
                ans++;
            else if (2 * i.first < m || freq.find(m - i.first) == freq.end())
                ans += (1 + max((int)0, abs(i.second - freq[m - i.first]) - 1));
        }
        cout << ans << endl;
        cout << endl;
    }
}