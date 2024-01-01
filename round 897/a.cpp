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
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            int ai;
            cin >> ai;
            a[i] = {ai, i};
        }
        sort(a.begin(), a.end());
        vector<int> b(n);
        int num = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            int ind = a[i].second;
            b[ind] = num;
            num++;
        }
        for (auto i : b)
            cout << i << " ";
        cout << endl;
        cout << endl;
    }
}