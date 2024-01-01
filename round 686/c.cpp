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
        unordered_map<int, vector<int>> mp;
        int a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            mp[a].push_back(i);
        }
        int ans = 1e9;
        if (n == 1)
            ans = 0;
        else
        {
            for (auto [num, indices] : mp)
            {
                int s = indices.size(), count = 0;
                if (s == 1)
                {
                    if (indices[0] > 0 && indices[0] < n - 1)
                        count += 2;
                    else
                        count++;
                }
                else
                {
                    for (int i = 0; i < s; i++)
                    {
                        if (indices[i] == 0)
                            continue;
                        if (i == 0)
                            count++;
                        else if (indices[i] - indices[i - 1] > 1)
                            count++;
                        if (i == s - 1)
                        {
                            if (indices[i] < n - 1)
                                count++;
                        }
                    }
                }
                ans = min(ans, count);
            }
        }
        cout << ans << endl;
        cout << endl;
    }
}