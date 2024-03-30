#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

signed main()
{
    // int t = 1;
    // cin >> t;

    // while (t--)
    // {
    //     cout << endl;
    // }

    for (int i = 0; i < 10; i++)
        cout << uniform_real_distribution<>(10.0, 1000000.0)(rng) << endl;
}