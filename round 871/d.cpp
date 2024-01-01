#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

bool solve(int n, int m)
{
    if (n == m)
        return true;
    if (n < m)
        return false;
    if (n % 3)
        return false;
    int t = n / 3;
    if (t == m || 2 * t == m)
    {
        return true;
    }
    return solve(t, m) || solve(2 * t, m);
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        // vector<int> dp(n + 1, -1);
        if (solve(n, m))
            pyes;
        else
            pno;
        cout << endl;
    }
}