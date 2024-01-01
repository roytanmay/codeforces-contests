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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int cs = v[0], ce = v[n - 1];
        if (cs == ce)
        {
            int i = 0, c = 0;
            while (i < n)
            {
                if (v[i] == cs)
                    c++;
                i++;
            }
            if (c >= k)
                pyes;
            else
                pno;
        }
        else
        {
            int s = 0, e = n - 1;
            int c1 = 0, c2 = 0;
            while (s < e && c1 < k)
            {
                if (v[s] == cs)
                    c1++;
                s++;
            }
            while (e >= s && c2 < k)
            {
                if (v[e] == ce)
                    c2++;
                e--;
            }
            if (c1 == k && c2 == k)
                pyes;
            else
                pno;
        }
        cout << endl;
    }
}