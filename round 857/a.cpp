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
        vector<int> v(n);
        int pve = 0, nve = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > 0)
                pve++;
            else
                nve++;
        }
        vector<int> a1(n), a2(n);
        int c = 1, i = 0;
        while (pve--)
        {
            a1[i] = c;
            c++;
            i++;
        }
        c -= 2;
        while (i < n)
        {
            a1[i] = c;
            c--;
            i++;
        }
        i = 0;
        while (nve--)
        {
            a2[i] = 1;
            i++;
            a2[i] = 0;
            i++;
        }
        c = 1;
        while (i < n)
        {
            a2[i] = c;
            i++;
            c++;
        }
        for (int i = 0; i < n; i++)
            cout << a1[i] << " ";
        cout << endl;
        for (int i = 0; i < n; i++)
            cout << a2[i] << " ";
        cout << endl;
        cout << endl;
    }
}