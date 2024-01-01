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
        // int num = 1;
        // unordered_map<int, int> mp;
        // mp[num]++;
        int i = 0, ans = 0;
        while (i < n)
        {
            int c = 2;
            while (i < n - 1 && s[i] == s[i + 1])
            {
                i++;
                c++;
            }
            ans = max(ans, c);
            i++;
        }
        // for (int i = 0; i < n; i++)
        // {
        //     if (s[i] == '<')
        //         num++;
        //     else
        //         num--;
        //     mp[num]++;
        // }
        cout << ans << endl;
        cout << endl;
    }
}