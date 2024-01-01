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
        vector<int> v(n);
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i] >> s[i];
        }
        int s1 = INT_MAX, s2 = INT_MAX, both = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (s[i][0] == '1' && s[i][1] == '1')
                both = min(both, v[i]);
            else if (s[i][0] == '1')
                s1 = min(s1, v[i]);
            else if (s[i][1] == '1')
                s2 = min(s2, v[i]);
        }
        if (both == INT_MAX && (s1 == INT_MAX || s2 == INT_MAX))
            cout << "-1" << endl;
        else if (both <= s1 + s2)
            cout << both << endl;
        else
            cout << s1 + s2 << endl;
        cout << endl;
    }
}