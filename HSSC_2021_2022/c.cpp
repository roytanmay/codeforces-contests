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
        int a = 0, b = 0, ar = 5, br = 5;
        int ans = 10;
        for (int i = 0; i < 10; i++)
        {
            if (i % 2 == 0)
            {
                ar--;
                if (s[i] == '1' || s[i] == '?')
                    a++;
            }
            else
            {
                br--;
                if (s[i] == '1')
                    b++;
            }
            if (a > b + br)
                ans = min(ans, i + 1);
        }
        a = 0;
        b = 0;
        ar = 5;
        br = 5;
        for (int i = 0; i < 10; i++)
        {
            if (i % 2 == 0)
            {
                ar--;
                if (s[i] == '1')
                    a++;
            }
            else
            {
                br--;
                if (s[i] == '1' || s[i] == '?')
                    b++;
            }
            if (b > a + ar)
                ans = min(ans, i + 1);
        }
        cout << ans << endl;
        cout << endl;
    }
}