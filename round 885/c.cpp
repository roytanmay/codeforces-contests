#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

// int operations(int a, int b)
// {
//     if (a == 0)
//         return 0;
//     if (b == 0)
//         return 1;
//     return 1 + operations(b, abs(a - b));
// }

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        unordered_set<int> st;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0 && b[i] == 0)
                continue;
            if (a[i] == b[i])
            {
                st.insert(2);
                continue;
            }
            if (a[i] == 0)
            {
                st.insert(0);
                continue;
            }
            if (b[i] == 0)
            {
                st.insert(1);
                continue;
            }
            // m.a[i] = n.b[i]  => b[i].a[i] = a[i].b[i]
            int g = __gcd(a[i], b[i]);
            int m = b[i] / g, n = a[i] / g;
            if (m % 2 == n % 2)
                st.insert(2);
            else if (n % 2)
                st.insert(1);
            else
                st.insert(0);

            // int r = operations(a[i], b[i]);
            // st.insert(r % 3);
        }
        if (st.size() <= 1)
            pyes;
        else
            pno;
        // cout << endl;
    }
}