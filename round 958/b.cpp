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
        string s;
        cin >> s;
        string temp = "";
        int i = 0;
        while (i < n)
        {
            while (i < n && s[i] == '1')
            {
                temp += '1';
                i++;
            }
            bool f = false;
            while (i < n && s[i] == '0')
            {
                f = true;
                i++;
            }
            if (f)
                temp += '0';
        }

        // string temp2 = "";
        n = temp.size();
        i = 0;
        int c0 = 0, c1 = 0;
        while (i < n)
        {
            if (temp[i] == '1')
                c1++;
            else
                c0++;
            i++;
        }

        // cout << temp << " " << c1 << endl;

        if (c0 >= c1)
            pno;
        else
            pyes;
        // cout << endl;
    }
}