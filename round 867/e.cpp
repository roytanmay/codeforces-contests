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
        string str;
        cin >> str;
        if (n % 2)
            cout << "-1" << endl;
        else
        {
            int s = 0, e = n - 1, c = 0;
            // while (s < e)
            // {
            //     if (str[s] == str[e])
            //         c++;
            //     s++;
            //     e--;
            // }
            vector<int> freq(26, 0);
            for (auto ch : str)
            {
                freq[ch - 'a']++;
            }
            bool flag = true;
            for (auto f : freq)
            {
                c = max(c, f);
            }
            if (c <= n / 2)
                cout << (c + 1) / 2 << endl;
            else
                cout << "-1" << endl;
        }
        cout << endl;
    }
}