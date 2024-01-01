#include <bits/stdc++.h>
using namespace std;
using namespace std;
long long power(long long a, long long b, long long mod)
{
    if (b == 0)
        return 1;
    long long res = power(a, b / 2, mod);
    if (b % 2)
        return ((res % mod) * (res % mod) * (a % mod)) % mod;
    else
        return ((res % mod) * (res % mod)) % mod;
}
int main()
{
    long long t = 1;
    cin >> t;
    while (t--)
    {
        long long mod = 1000000007;
        long long n1, n2, r, sum, diff;
        cin >> r >> n1 >> n2;
        sum = n1 + n2;
        diff = (long long)abs(n1 - n2);
        if (r % 2 == 0)
        {
            long long p = (r / 2)-1;
            sum+=(abs(n1-n2));
            long long ans = ((sum% mod) * (power(2, p, mod) % mod)) % mod;
            
            cout << ans << endl;
        }
        else
        {
            long long p = r / 2;
            long long ans = ((sum % mod) * (power(2, p, mod) % mod)) % mod;
            cout << ans << endl;
        }
    }
    return 0;
}