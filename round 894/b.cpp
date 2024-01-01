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
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> b[i];
        vector<int> a;
        a.push_back(b[0]);
        for (int i = 1; i < n; i++)
        {
            if (a.back() <= b[i])
                a.push_back(b[i]);
            else
            {
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
        }
        cout << a.size() << endl;
        for (auto i : a)
            cout << i << " ";
        cout << endl;
        cout << endl;
    }
}