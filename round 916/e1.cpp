#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int solve(vector<int> &a, vector<int> &b, int &n, int t)
{
    bool f = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] && b[i])
        {
            f = true;
            break;
        }
    }

    if (!f)
    {
        int A = 0, B = 0;
        for (int i = 0; i < n; i++)
        {
            A += a[i];
            B += b[i];
        }
        return A - B;
    }

    if (t == 0)
    {
        int ans = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            if (a[i] && b[i])
            {
                int temp = b[i];
                a[i] -= 1;
                b[i] = 0;
                ans = max(ans, solve(a, b, n, 1));

                a[i] += 1;
                b[i] = temp;
            }
        }
        return ans;
    }

    int ans = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] && b[i])
        {
            int temp = a[i];
            b[i] -= 1;
            a[i] = 0;
            ans = min(ans, solve(a, b, n, 0));

            b[i] += 1;
            a[i] = temp;
        }
    }
    return ans;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        // while (true)
        // {
        //     int ind = -1, maxi = 0;
        //     for (int i = 0; i < n; i++)
        //     {
        //         if (a[i] > maxi && b[i] > 0)
        //         {
        //             maxi = a[i];
        //             ind = i;
        //         }
        //     }
        //     if (ind == -1)
        //         break;
        //     a[ind] -= 1;
        //     b[ind] = 0;

        //     ind = -1;
        //     int mini = 1e12;
        //     for (int i = 0; i < n; i++)
        //     {
        //         if (b[i] > 0 && b[i] < mini && a[i] > 0)
        //         {
        //             mini = b[i];
        //             ind = i;
        //         }
        //     }
        //     if (ind == -1)
        //         break;
        //     b[ind] -= 1;
        //     a[ind] = 0;
        // }

        // int A = 0, B = 0;
        // for (auto i : a)
        //     A += i;
        // for (auto i : b)
        //     B += i;
        // cout << A - B << endl;

        cout << solve(a, b, n, 0) << endl;
    }
}