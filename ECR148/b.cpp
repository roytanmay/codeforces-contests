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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int sum = 0;
        for (auto i : a)
            sum += i;
        int temp = 0;
        for (int i = 0; i < n - k; i++)
            temp += a[i];
        int s = 0, e = n - k, ans = temp;
        while (e < n)
        {
            temp -= (a[s] + a[s + 1]);
            s += 2;
            temp += a[e];
            e++;
            ans = max(ans, temp);
        }
        cout << ans << endl;
        cout << endl;
    }
}