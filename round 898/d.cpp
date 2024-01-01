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
        string str;
        cin >> str;
        int ans = 0, i = 0;
        while (i < n)
        {
            if (str[i] == 'B')
            {
                ans++;
                i += k;
            }
            else
                i++;
        }
        cout << ans << endl;
        cout << endl;
    }
}