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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int d = 0;
        bool f = true;
        int i = n - 1;
        while (i > 0)
        {
            if (v[i - 1] > v[i])
            {
                if (i == 1)
                {
                    f = false;
                    break;
                }
                else
                    v[i - 2] -= (v[i - 1] - v[i]);
            }
            else if (i >= 2)
                v[i - 2] += (v[i] - v[i - 1]);

            i -= 2;
        }
        if (n == 2 && v[0] > v[1])
            pno;
        else if (f)
            pyes;
        else
            pno;
        cout << endl;
    }
}