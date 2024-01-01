#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int solve(vector<int> &gl, vector<int> &color, int n)
{
    int res = 0, s = 0;
    for (int i = 0; i < color.size(); i++)
    {
        while (s < gl.size() && gl[s] < color[i])
            s++;
        if (s >= gl.size())
            res = max(res, gl[0] + n - color[i]);
        else
            res = max(res, gl[s] - color[i]);
    }
    return res;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        vector<int> rl, gl, yl;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'r')
                rl.push_back(i);
            else if (s[i] == 'g')
                gl.push_back(i);
            else
                yl.push_back(i);
        }
        if (c == 'g')
            cout << "0" << endl;
        else if (c == 'r')
            cout << solve(gl, rl, n) << endl;
        else
            cout << solve(gl, yl, n) << endl;
        cout << endl;
    }
}