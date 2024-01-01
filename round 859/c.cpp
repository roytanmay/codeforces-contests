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
        unordered_map<char, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]].push_back(i);
        }
        bool f = true;
        for (auto i : mp)
        {
            int si = i.second.size();
            for (int j = 0; j < si - 1; j++)
            {
                if ((i.second[j + 1] - i.second[j]) % 2)
                {
                    f = false;
                    break;
                }
            }
            if (!f)
                break;
        }
        if (f)
            pyes;
        else
            pno;
        cout << endl;
    }
}