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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // sort(a.begin(), a.end());
        vector<int> even, odd;
        for (auto i : a)
        {
            if (i & 1)
                odd.push_back(i);
            else
                even.push_back(i);
        }
        if (odd.size() == n || even.size() == n)
            pyes;
        else
        {
            sort(odd.begin(), odd.end());
            sort(even.begin(), even.end());
            if (odd[0] < even[0])
                pyes;
            else
                pno;
        }
        cout << endl;
    }
}