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
        if (a[0] != n)
            pno;
        else
        {
            vector<pair<int, int>> t1, t2;

            int i = 0;
            while (i < n)
            {
                int s = i - 1, e;
                int st = a[i++];
                while (i < n && a[i] == st)
                {
                    e = i;
                    i++;
                }
                if (s >= 0)
                    t1.push_back({(a[s] - st), (n - s - 1)});
            }

            i = n - 1;
            while (i >= 0)
            {
                int c = 1, st = a[i];
                i--;
                while (i >= 0 && a[i] == st)
                {
                    i--;
                    c++;
                }
                if (c && (n - st) != 0)
                    t2.push_back({c, (n - st)});
            }

            // if (t2.size() && t2.back() == 0)
            //     t2.pop_back();

            if (t1 == t2)
                pyes;
            else
                pno;
        }
        cout << endl;
    }
}