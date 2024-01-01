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
        vector<int> a(n);
        int axor = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            axor = axor ^ a[i];
        }
        if (n % 2 == 0)
        {
            if (axor == 0)
                cout << "1" << endl;
            else
                cout << "-1" << endl;
        }
        else
        {
            cout << axor << endl;
        }
        cout << endl;
    }
}