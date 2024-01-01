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
        int ans = 0;
        for (int i = 2; i <= n; i++)
        {
            int num = 1, sum = 0, j = 1, maxi = 0;
            while (num <= n - i)
            {
                sum += (num * j);
                maxi = max(maxi, num * j);
                num++;
                j++;
            }
            int num2 = n;
            while (j <= n)
            {
                sum += (num2 * j);
                maxi = max(maxi, num2 * j);
                j++;
                num2--;
            }
            ans = max(ans, sum - maxi);
        }
        cout << ans << endl;
        cout << endl;
    }
}