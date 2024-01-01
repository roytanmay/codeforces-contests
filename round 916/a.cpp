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
        string s;
        cin >> s;
        vector<int> v(26, 0);
        for (auto i : s)
            v[i - 'A']++;
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (v[i] >= i + 1)
                ans++;
        }
        cout << ans << endl;
    }
}