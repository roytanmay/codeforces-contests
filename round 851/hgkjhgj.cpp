#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int mod = 1e9 + 7;
int sum(int n)
{
    if (n < 10)
    {
        return n;
    }
    return n % 10 + sum(n / 10);
}
int f(int n)
{
    for (int i = n / 2; i >= 0; i -= 4)
    {
        if (abs(sum(i) - sum(n - i)) < 2)
        {
            // return i;
            cout << n << ' ' << i << ' ' << n - i << '\n';
        }
    }
    return n;
}
signed main()
{
    FastIO;
    int tt = 1;
    cin >> tt;
    while (tt--)
    {

        int n;
        cin >> n;
        if (n % 10 == 9)
        {
            int t = n;
            string x = "", y = "";
            bool f = true;
            while (t)
            {
                int p = t % 10;
                t /= 10;
                if (p % 2)
                {
                    if (f)
                    {
                        x += to_string(p / 2);
                        y += to_string(p / 2 + 1);
                    }
                    else
                    {
                        x += to_string(p / 2 + 1);
                        y += to_string(p / 2);
                    }
                }
                else
                {
                    x += to_string(p / 2 + 1);
                    y += to_string(p / 2);
                }
            }
            reverse(x.begin(), x.end());
            reverse(y.begin(), y.end());
            int xx = stoi(x), yy = stoi(y);
            cout << xx << ' ' << yy << '\n';
        }
        else
        {
            int x = (n / 2);
            if (n % 2)
                x++;
            int y = n - x;
            cout << x << ' ' << y << endl;
        }
    }
    return 0;
}