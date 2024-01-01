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
        vector<int> b(n);
        int p = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            p *= b[i];
        }
        if (2023 % p)
            pno;
        else
        {
            int r = 2023 / p;
            pyes;
            cout << r << " ";
            k--;
            while (k--)
                cout << "1 ";
            cout << endl;
        }
        // cout << endl;
    }
}