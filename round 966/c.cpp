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
        vector<int> a(n);
        map<int, vector<int>> mp1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp1[a[i]].push_back(i);
        }

        int m;
        cin >> m;
        vector<string> ans(m);
        for (int l = 0; l < m; l++)
        {
            string s;
            cin >> s;
            int len = s.size();
            bool f = true;

            if (len != n)
                f = false;
            if (!f)
            {
                ans[l] = "NO";
                continue;
            }

            map<char, vector<int>> mp2;
            for (int i = 0; i < len; i++)
            {
                mp2[s[i]].push_back(i);
            }

            map<int, int> vis1;

            for (int i = 0; i < n; i++)
            {
                if (vis1.count(a[i]))
                    continue;
                if (mp1[a[i]] != mp2[s[i]])
                {
                    f = false;
                    break;
                }
                vis1[a[i]] = 1;
            }

            if (!f)
            {
                ans[l] = "NO";
                continue;
            }

            map<char, int> vis2;
            for (int i = 0; i < n; i++)
            {
                if (vis2.count(s[i]))
                    continue;
                if (mp1[a[i]] != mp2[s[i]])
                {
                    f = false;
                    break;
                }
                vis2[s[i]] = 1;
            }

            if (!f)
                ans[l] = "NO";
            else
                ans[l] = "YES";
        }

        for (auto i : ans)
            cout << i << endl;
        // cout << endl;
    }
}