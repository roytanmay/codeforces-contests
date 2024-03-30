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
        map<int, int> mp;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            mp[a[i]]++;
        }
        int r = sum % 3;
        if (r == 0)
            cout << 0 << endl;
        else if (r == 2)
            cout << 1 << endl;
        else
        {
            bool f = false;
            for (int i = 0; i < n; i++)
            {
                if ((sum - a[i]) % 3 == 0)
                {
                    f = true;
                    break;
                }
            }
            if (f)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        // cout << endl;
    }
}