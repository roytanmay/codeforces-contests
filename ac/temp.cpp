#include <bits/stdc++.h>
using namespace std;

random_device rd;  // a seed source for the random number engine
mt19937 gen(rd()); // mersenne_twister_engine seeded with rd()
// uniform_int_distribution<> distrib(1, 6);

uniform_int_distribution<int> distribution(1, 1e9);

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int f()
{

    long long ans = (1LL * rand() * rand()) % mod;
    while (ans == 0 || ans > 1e9)
    {
        ans = (1LL * rand() * rand()) % mod;
    }
    return ans;
}

signed main()
{
    srand(time(0));
    cout << f() << endl;

    // int t = 1;
    // cin >> t;

    // while (t--)
    // {
    //     cout << endl;
    // }
}