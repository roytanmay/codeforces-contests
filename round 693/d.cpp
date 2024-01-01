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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int globalRes = 0, t = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (t % 2)
            {
                if (a[i] % 2)
                    globalRes -= a[i];
            }
            else
            {
                if (a[i] % 2 == 0)
                    globalRes += a[i];
            }
            t++;
        }
        if (globalRes > 0)
            cout << "Alice" << endl;
        else if (globalRes < 0)
            cout << "Bob" << endl;
        else
            cout << "Tie" << endl;
        cout << endl;
    }
}