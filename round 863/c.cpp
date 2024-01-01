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
        vector<int> b(n - 1);
        for (int i = 0; i < n - 1; i++)
            cin >> b[i];
        vector<int> a(n);
        for (int i = 0; i < n - 1; i++)
        {
            if (i + 1 < n - 1 && b[i] > b[i + 1])
            {
                a[i] = b[i];
                a[i + 1] = 0;
            }
            else
                a[i + 1] = b[i];
        }
        for (auto i : a)
            cout << i << " ";
        cout << endl;
        cout << endl;
    }
}