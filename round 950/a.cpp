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
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;
        map<char, int> mp;
        for (auto i : a)
            mp[i]++;
        int ans = 0;
        for (char ch = 'A'; ch <= 'G'; ch++)
        {
            ans += max((m - mp[ch]), 0LL);
        }
        cout << ans << endl;
    }
}