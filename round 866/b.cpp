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
        string s;
        cin >> s;
        int n = s.size();
        int c0 = 0, c1 = 0, maxC1 = 0, temp = 0, i = 0;
        while (i < n)
        {
            while (i < n && s[i] == '0')
            {
                c0++;
                i++;
            }
            temp = 0;
            while (i < n && s[i] == '1')
            {
                c1++;
                temp++;
                i++;
            }
            maxC1 = max(maxC1, temp);
        }
        if (c1 == 0)
        {
            cout << "0" << endl;
            continue;
        }
        if (c1 == n)
        {
            cout << n * n << endl;
            continue;
        }
        int sc1 = 0, ec1 = 0;
        i = 0;
        while (i < n && s[i] == '1')
        {
            i++;
            sc1++;
        }
        i = n - 1;
        while (i >= 0 && s[i] == '1')
        {
            i--;
            ec1++;
        }
        maxC1 = max(maxC1, sc1 + ec1);
        int ans = maxC1, c = 1;
        temp = maxC1;
        while (temp)
        {
            ans = max(ans, temp * c);
            c++;
            temp--;
        }
        cout << ans << endl;
        cout << endl;
    }
}