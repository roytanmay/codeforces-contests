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
        int n, m;
        cin >> n >> m;
        vector<int> k(n);
        for (int i = 0; i < n; i++)
            cin >> k[i];
        sort(k.begin(), k.end());
        for (int i = 0; i < m; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            int index = lower_bound(k.begin(), k.end(), b) - k.begin();
            if (index < n && (b - k[index]) * (b - k[index]) - 4 * a * c < 0)
            {
                pyes;
                cout << k[index] << endl;
            }
            else if (index > 0 && (b - k[index - 1]) * (b - k[index - 1]) - 4 * a * c < 0)
            {
                pyes;
                cout << k[index - 1] << endl;
            }
            else
                pno;
        }
        cout << endl;
    }
}