#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

signed main()
{
    int t = 1;
    // cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (auto num : a)
        {
            string s = to_string(num);
            int m = s.size();
            if (m > 2 && s.substr(0, 2) == "10")
            {
                int temp = stoi(s.substr(2, m - 2));
                if (temp >= 2 && s[2] != '0')
                    pyes;
                else
                    pno;
            }
            else
                pno;
        }
        // cout << endl;
    }
}