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
        string s;
        cin >> s;

        vector<int> pxor(n);
        pxor[0] = a[0];
        for (int i = 1; i < n; i++)
            pxor[i] = pxor[i - 1] ^ a[i];

        int oneXor = 0, zeroXor = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zeroXor ^= a[i];
            else
                oneXor ^= a[i];
        }

        vector<int> ans;

        int q;
        cin >> q;
        while (q--)
        {
            int type;
            cin >> type;

            if (type == 1)
            {
                int l, r;
                cin >> l >> r;
                l--;
                r--;

                int temp = pxor[r];
                if (l - 1 >= 0)
                    temp ^= pxor[l - 1];

                oneXor ^= temp;
                zeroXor ^= temp;
            }
            else
            {
                int g;
                cin >> g;
                if (g == 1)
                    ans.push_back(oneXor);
                else
                    ans.push_back(zeroXor);
            }
        }

        for (auto i : ans)
            cout << i << " ";
        cout << endl;
        cout << endl;
    }
}