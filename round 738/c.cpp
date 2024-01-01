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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        bool f = false;
        for (int i = 1; i <= n; i++)
        {
            if (i == 1 && a[i] != 0)
            {
                f = true;
                cout << n + 1 << " ";
                for (int j = 1; j <= n; j++)
                    cout << j << " ";
                cout << endl;
                break;
            }
            else if (i == n && a[i] == 0)
            {
                f = true;
                for (int j = 1; j <= n + 1; j++)
                    cout << j << " ";
                cout << endl;
                break;
            }
            else if (i < n && a[i] == 0 && a[i + 1] == 1)
            {
                f = true;
                for (int j = 1; j <= i; j++)
                    cout << j << " ";
                cout << n + 1 << " ";
                for (int j = i + 1; j <= n; j++)
                    cout << j << " ";
                cout << endl;
                break;
            }
        }
        if (!f)
            cout << "-1" << endl;
        cout << endl;
    }
}