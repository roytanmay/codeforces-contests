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
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            p[i]--;
            if (p[i] == 0)
                p[i] = n;
        }
        // reverse(p.begin(), p.end());
        // if (n % 2 == 1 && n > 1)
        // {
        //     swap(p[n / 2], p[n / 2 - 1]);
        // }
        for (auto i : p)
            cout << i << " ";
        cout << endl;
    }
}