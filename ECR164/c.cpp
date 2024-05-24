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
        string x, y;
        cin >> x >> y;

        int n1 = x.size(), n2 = y.size(), maxi = 0;
        if (x[0] < y[0])
            maxi = 1;

        string s1 = "", s2 = "";
        s1 += x[0];
        s2 += y[0];

        for (int i = 1; i < min(n1, n2); i++)
        {
            if (s1 >= s2 && x[i] > y[i])
            {
                swap(x[i], y[i]);
            }
            else if (s2 >= s1 && y[i] > x[i])
            {
                swap(x[i], y[i]);
            }

            s1 += x[i];
            s2 += y[i];
        }
        cout << s1 << endl;
        cout << s2 << endl;
    }
}