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
        if (n == 1)
            cout << s << endl;
        else
        {
            char mini = 'z';
            int index;
            for (int i = n - 1; i >= 0; i--)
            {
                if (s[i] < mini)
                {
                    mini = s[i];
                    index = i;
                }
            }
            string ans = "";
            ans += mini;
            for (int i = 0; i < n; i++)
            {
                if (i != index)
                    ans += s[i];
            }
            // sort(s.begin(), s.end());
            // if (ans == s)
            // {
            //     swap(ans[0], ans[1]);
            // }
            cout << ans << endl;
        }
        cout << endl;
    }
}