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
        sort(a.rbegin(), a.rend());

        int i = n - 1, last = a[i], count = 0;
        while (i >= 0 && a[i] == last)
        {
            count++;
            i--;
        }

        while (i >= 0)
        {
            int d = a[i] - last;
            if (k < d * count)
                break;

            k -= d * count;
            last = a[i];

            while (i >= 0 && a[i] == last)
            {
                count++;
                i--;
            }
        }

        last = last + (k / count);
        k = k % count;
        count -= k;

        cout << last * n + 1 - count << endl;
    }
}