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
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            pyes;
            cout << n << endl;
            for (int i = 0; i < n; i++)
                cout << "1 ";
            cout << endl;
        }
        else
        {
            if (n == 1 || k == 1)
                pno;
            else if ((n == 3 || n == 5) && k < 3)
                pno;
            else
            {
                pyes;
                if (n % 2)
                {
                    int m = (n - 3) / 2;
                    cout << m + 1 << endl;
                    cout << "3 ";
                    for (int i = 0; i < m; i++)
                        cout << "2 ";
                    cout << endl;
                }
                else
                {
                    int m = n / 2;
                    cout << m << endl;
                    for (int i = 0; i < m; i++)
                        cout << "2 ";
                    cout << endl;
                }
            }
        }
        cout << endl;
    }
}