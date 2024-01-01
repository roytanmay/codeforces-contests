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
        for (int i = 1; i <= k - 3; i++)
            cout << "1 ";
        n -= (k - 3);
        if (n % 2)
            cout << "1 " << n / 2 << " " << n / 2 << endl;
        else if (n % 4 == 0)
            cout << n / 2 << " " << n / 4 << " " << n / 4 << endl;
        else
            cout << (n / 2) - 1 << " " << (n / 2) - 1 << " 2" << endl;
        cout << endl;
    }
}