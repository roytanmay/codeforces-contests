#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int solve(vector<int> &v)
{
    int res = 0, temp = 0, rem = 0, g = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 2)
        {
            if (rem > 0)
            {
                g += (rem - 1) / 2;
                rem = (rem - 1) % 2 + 1;
            }
        }
        else
            rem++;
        res = max(res, g + rem);
    }
    return res;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
                c1++;
            else
                c2++;
        }
        if (c1 == n)
            cout << n << endl;
        else if (c2 == n)
            cout << "0" << endl;
        else
            cout << solve(v) << endl;
        cout << endl;
    }
}