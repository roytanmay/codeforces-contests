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
        // vector<pair<int, int>> k(n);
        vector<int> k(n), x(n);
        for (int i = 0; i < n; i++)
        {
            cin >> k[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            x[i] = (1e9 / k[i]) + 1;
            sum += x[i];
        }

        bool f = true;
        for (int i = 0; i < n; i++)
        {
            if (k[i] * x[i] <= sum)
            {
                f = false;
                break;
            }
        }

        if (!f)
            cout << "-1" << endl;
        else
        {
            for (auto i : x)
                cout << i << " ";
            cout << endl;
        }
    }
}