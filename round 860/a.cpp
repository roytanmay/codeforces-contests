#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "Yes" << endl
#define pno cout << "No" << endl

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
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= b[i])
                swap(a[i], b[i]);
        }
        int maxia = *max_element(a.begin(), a.end()), maxib = *max_element(b.begin(), b.end());
        if (maxia == a[n - 1] && maxib == b[n - 1])
            pyes;
        else
            pno;
        cout << endl;
    }
}