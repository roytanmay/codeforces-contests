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
        string s, t;
        cin >> s >> t;
        vector<int> f1(26, 0), f2(26, 0);
        for (auto ch : s)
            f1[ch - 'a']++;
        for (auto ch : t)
            f2[ch - 'a']++;
        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            if (f1[i] != f2[i])
            {
                flag = false;
                break;
            }
        }
        if (!flag)
            pno;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] != t[i])
                {
                    if (i - k < 0 && i + k >= n)
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if (!flag)
                pno;
            else
                pyes;
        }
        cout << endl;
    }
}