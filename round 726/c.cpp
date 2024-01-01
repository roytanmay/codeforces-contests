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
        vector<int> h(n), ans(n);
        for (int i = 0; i < n; i++)
            cin >> h[i];
        sort(h.begin(), h.end());
        int diff = INT_MAX, i1, i2;
        for (int i = 1; i < n; i++)
        {
            if (h[i] - h[i - 1] < diff)
            {
                diff = h[i] - h[i - 1];
                ans[0] = h[i - 1];
                ans[n - 1] = h[i];
                i1 = i - 1;
                i2 = i;
            }
        }
        int i = i2 + 1, j = 1;
        while (i < n)
            ans[j++] = h[i++];
        i = 0;
        while (i < i1)
            ans[j++] = h[i++];
        for (auto i : ans)
            cout << i << " ";
        cout << endl;
        cout << endl;
    }
}