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
        vector<int> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];
        sort(s.begin(), s.end());
        int mex = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == mex)
                mex++;
        }
        int y = 0, maxi = s[n - 1];
        while (y != -1 && y != -2)
        {
            cout << mex << endl;
            cin >> y;
            if (y < mex)
                mex = y;
            else
            {
                mex = maxi;
                maxi++;
            }
        }
        cout << endl;
    }
}