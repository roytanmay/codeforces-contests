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
        vector<int> even, odd, ei, oi;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2)
            {
                odd.push_back(a[i]);
                oi.push_back(i);
            }
            else
            {
                even.push_back(a[i]);
                ei.push_back(i);
            }
        }
        vector<int> v(n);
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        int i = 0;
        for (auto e : even)
        {
            v[ei[i]] = e;
            i++;
        }
        i = 0;
        for (auto o : odd)
        {
            v[oi[i]] = o;
            i++;
        }
        bool f = true;
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
            {
                f = false;
                break;
            }
        }
        if (f)
            pyes;
        else
            pno;
        cout << endl;
    }
}