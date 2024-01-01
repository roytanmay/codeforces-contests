#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int solve(int &a, int &s)
{
    if (a > s)
        return -1;
    string astr = to_string(a), sstr = to_string(s);
    int i1 = astr.size() - 1, i2 = sstr.size() - 1;
    int n = 1;
    int temp1 = 0, temp2 = 0;
    string res = "";
    while (i1 >= 0 && i2 >= 0)
    {
        temp1 = sstr[i2] - '0';
        temp2 = astr[i1] - '0';
        if (temp1 < temp2)
        {
            i2--;
            if (i2 < 0)
                return -1;
            temp1 = (sstr[i2] - '0') * 10 + temp1;
        }
        if (temp1 - temp2 > 9 || temp1 - temp2 < 0)
            return -1;
        res += to_string(temp1 - temp2);
        i1--;
        i2--;
    }
    if (i2 < 0 && i1 >= 0)
        return -1;
    while (i2 >= 0)
    {
        res += sstr[i2];
        i2--;
    }
    reverse(res.begin(), res.end());
    return stoll(res);
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int a, s;
        cin >> a >> s;
        cout << solve(a, s) << endl;
        cout << endl;
    }
}