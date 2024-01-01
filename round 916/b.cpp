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
        int c = n;
        vector<int> v(n);
        for (int i = k; i >= 0; i--)
        {
            v[i] = c;
            c--;
        }
        for (int i = k + 1; i < n; i++)
        {
            v[i] = c;
            c--;
        }
        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }
}