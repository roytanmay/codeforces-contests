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
        string str;
        cin >> str;
        vector<int> even(26, 0), odd(26, 0);
        int ans = n;

        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                    even[str[i] - 'a']++;
                else
                    odd[str[i] - 'a']++;
            }

            int maxi1 = 0, maxi2 = 0;
            for (auto i : even)
            {
                maxi1 = max(maxi1, i);
            }
            for (auto i : odd)
            {
                maxi2 = max(maxi2, i);
            }
            ans = n - maxi1 - maxi2;
            cout << ans << endl;
        }
        else
        {
            vector<vector<int>> e(n, vector<int>(26, 0));
            vector<vector<int>> o(n, vector<int>(26, 0));

            for (int i = n - 1; i >= 0; i--)
            {
                if (i < n - 1)
                {
                    o[i] = o[i + 1];
                    e[i] = e[i + 1];
                }

                if (i % 2 == 0)
                {
                    o[i][str[i] - 'a']++;
                }
                else
                {
                    e[i][str[i] - 'a']++;
                }
            }

            for (int i = 0; i < n; i++)
            {
                vector<int> v1 = even, v2 = odd;
                if (i + 1 < n)
                {
                    for (int j = 0; j < 26; j++)
                    {
                        v1[j] += e[i + 1][j];
                        v2[j] += o[i + 1][j];
                    }
                }

                int maxi1 = 0, maxi2 = 0;
                for (auto i : v1)
                {
                    maxi1 = max(maxi1, i);
                }
                for (auto i : v2)
                {
                    maxi2 = max(maxi2, i);
                }
                ans = min(ans, n - 1 - maxi1 - maxi2);

                if (i % 2 == 0)
                    even[str[i] - 'a']++;
                else
                    odd[str[i] - 'a']++;
            }
            cout << ans + 1 << endl;
        }
    }
}