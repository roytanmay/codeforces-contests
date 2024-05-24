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
        char ch;
        int c0 = 0, c1 = 0, sum = 0, sum1 = 0;
        for (int i = 0; i < 21; i++)
        {
            for (int j = 0; j < 21; j++)
            {
                cin >> ch;
                if (ch == '0')
                    c0++;
                else
                    c1++;

                if (i == 21 - j - 1)
                    sum1 += (ch - '0');
            }
            // cout << c0 << " " << c1 << endl;
            // sum += (c1 - c0);
            c0 = c1 = 0;
        }
        cout << sum1 << endl;
    }
}