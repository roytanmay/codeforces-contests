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
        if (n == 1)
            cout << "1" << endl;
        else if (n % 2)
            cout << "-1" << endl;
        else
        {
            int s = 0, e = n - 1;
            vector<int> a(n);
            for (int i = 0; i < n; i += 2)
            {
                a[i] = s;
                a[i + 1] = e;
                s++;
                e--;
            }
            int temp = 1;
            for (int i = 0; i < n; i += 2)
            {
                a[i] = temp * n + a[i];
                a[i + 1] = temp * n + a[i + 1];
                temp++;
            }
            for (int i = n - 1; i > 0; i--)
                a[i] = a[i] - a[i - 1];
            for (auto i : a)
                cout << i << " ";
            cout << endl;
        }
        cout << endl;
    }
}