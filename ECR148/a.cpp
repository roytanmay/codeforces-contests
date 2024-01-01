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
        string str;
        cin >> str;
        unordered_map<char, int> mp;
        int s = 0, e = str.size() - 1;
        while (s < e)
        {
            mp[str[s]]++;
            mp[str[e]]++;
            s++;
            e--;
        }
        if (mp.size() > 1)
            pyes;
        else
            pno;
        cout << endl;
    }
}