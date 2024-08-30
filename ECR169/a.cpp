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
        vector<int> x(n);
        for (int i = 0; i < n; i++)
            cin >> x[i];
        if (n > 2)
            pno;
        else
        {
            sort(x.begin(), x.end());
            if (x[1] - x[0] == 1)
                pno;
            else
                pyes;
        }
        // cout << endl;
    }
}