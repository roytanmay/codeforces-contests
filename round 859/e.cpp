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
        vector<int> a(n), psum(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        psum[0] = a[0];
        for (int i = 1; i < n; i++)
            psum[i] = psum[i - 1] + a[i];
        int s = 0, e = n - 1, mid;
        while (s <= e)
        {
            mid = s + (e - s) / 2;
            cout << "? " << mid - s + 1 << " ";
            for (int i = s; i <= mid; i++)
                cout << i + 1 << " ";
            cout << endl;
            // cout.flush();
            int response;
            cin >> response;
            int w = psum[mid];
            if (s > 0)
                w -= psum[s - 1];
            if (response == w)
            {
                s = mid + 1;
            }
            else
                e = mid - 1;
        }
        cout << "! " << s + 1 << endl;
        // cout.flush();
        // cout << endl;
    }
}