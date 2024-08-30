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
        int m = n / 2;
        stack<int> st1, st2;
        int ans = 0, count = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == ')')
                st2.push(i);
        }
        count = m - st2.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '_')
            {
                if ((int)st1.size() > 0 && count > 0)
                {
                    ans += (i - st1.top());
                    st1.pop();
                    count--;
                }
                else
                {
                    st1.push(i);
                }
            }
            else if (s[i] == '(')
            {
                st1.push(i);
            }
            else
            {
                ans += (i - st1.top());
                st1.pop();
            }
        }
        cout << ans << endl;
        cout << endl;
    }
}