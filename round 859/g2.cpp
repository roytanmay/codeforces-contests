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
        vector<int> c(n);
        for (int i = 0; i < n; i++)
            cin >> c[i];
        if (n == 1)
        {
            if (c[0] == 1)
                pyes;
            else
                pno;
        }
        else
        {
            sort(c.begin(), c.end());
            if (c[0] != 1 || c[1] != 1)
                pno;
            else
            {
                bool f = true;
                int sum = c[0];
                for (int i = 1; i < n; i++)
                {
                    if (c[i] > sum)
                    {
                        f = false;
                        break;
                    }
                    else
                        sum += c[i];
                }
                if (f)
                    pyes;
                else
                    pno;
            }
        }
        cout << endl;
    }
}