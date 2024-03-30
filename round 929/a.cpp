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
        int a, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += abs(a);
        }
        cout << sum << endl;
    }
}