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
        int n, a;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
        }
        int sq = sqrt(sum);
        if (sq * sq == sum)
            pyes;
        else
            pno;
        // cout << endl;
    }
}