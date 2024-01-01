#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int trap(vector<int> &height, int h)
{
    int n = height.size();
    vector<int> leftMax(n, 0), rightMax(n, 0);
    for (int i = 1; i < n; i++)
        leftMax[i] = max(leftMax[i - 1], height[i - 1]);
    for (int i = n - 2; i >= 0; i--)
        rightMax[i] = max(rightMax[i + 1], height[i + 1]);
    int ans = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        int t = min({leftMax[i], rightMax[i], h}) - height[i];
        if (t > 0)
            ans += t;
    }
    return ans;
}

bool isPossible(vector<int> &a, int x, int mid)
{
    return trap(a, mid) <= x;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n + 2);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int s = 1, e = 1e12, mid, ans;
        while (s <= e)
        {
            mid = s + (e - s) / 2;
            a[0] = mid;
            a[n + 1] = mid;
            if (isPossible(a, x, mid))
            {
                ans = mid;
                s = mid + 1;
            }
            else
                e = mid - 1;
        }
        cout << ans << endl;
        cout << endl;
    }
}