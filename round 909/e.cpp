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
        vector<int> a(n);
        int mini = 1e9 + 7, ind = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < mini)
            {
                mini = a[i];
                ind = i;
            }
        }
        bool f = true;
        for (int i = ind + 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                f = false;
                break;
            }
        }
        if (f)
            cout << ind << endl;
        else
            cout << "-1" << endl;
    }
}