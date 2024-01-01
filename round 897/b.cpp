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
        string str;
        cin >> str;
        int differ = 0;
        int s = 0, e = n - 1;
        while (s < e)
        {
            if (str[s] != str[e])
                differ++;
            s++;
            e--;
        }
        int same = n - (2 * differ);
        string ans = "";
        for (int i = 0; i <= n; i++)
        {
            if (i < differ)
                ans += '0';
            else if (i == differ)
                ans += '1';
            else
            {
                int temp = i - differ;
                if (temp % 2 == 0)
                {
                    if (temp <= same)
                        ans += '1';
                    else
                        ans += '0';
                }
                else
                {
                    if (same % 2 && temp <= same)
                        ans += '1';
                    else
                        ans += '0';
                }
            }
        }
        cout << ans << endl;
        cout << endl;
    }
}