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
        vector<int> weights(n);
        for (int i = 0; i < n; i++)
            cin >> weights[i];
        sort(weights.begin(), weights.end());
        int ans = 0;
        for (int w = 2; w <= 2 * n; w++)
        {
            int s = 0, e = n - 1, c = 0;
            while (s < e)
            {
                if (weights[s] + weights[e] == w)
                {
                    s++;
                    e--;
                    c++;
                }
                else if (weights[s] + weights[e] > w)
                    e--;
                else
                    s++;
            }
            ans = max(ans, c);
        }
        cout << ans << endl;
        cout << endl;
    }
}