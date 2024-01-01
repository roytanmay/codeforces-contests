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
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int n = a + b;
        if (a % 2 && b % 2)
            cout << "-1" << endl;
        else if (n == 1)
        {
            if (a == 1 && s[0] == '1' || b == 1 && s[0] == '0')
                cout << "-1" << endl;
            else if (s[0] == '?')
            {
                if (a)
                    s[0] = '0';
                else
                    s[0] = '1';
                cout << s << endl;
            }
            else
                cout << s << endl;
        }
        else
        {
            bool f = true;
            int ta = a, tb = b;
            for (int i = 0; i < n / 2; i++)
            {
                if (s[i] == '1')
                {
                    if (s[n - i - 1] == '?')
                    {
                        if (b == 0)
                        {
                            f = false;
                            break;
                        }
                        s[n - i - 1] = '1';
                        b--;
                    }
                    b--;
                }
                else if (s[i] == '0')
                {
                    if (s[n - i - 1] == '?')
                    {
                        if (a == 0)
                        {
                            f = false;
                            break;
                        }
                        s[n - i - 1] = '0';
                        a--;
                    }
                    a--;
                }
                else
                {
                    if (s[n - i - 1] == '1')
                    {
                        if (b == 0)
                        {
                            f = false;
                            break;
                        }
                        s[i] = '1';
                        b--;
                    }
                    else if (s[n - i - 1] == '0')
                    {
                        if (a == 0)
                        {
                            f = false;
                            break;
                        }
                        s[i] = '0';
                        a--;
                    }
                }
            }
            if (f)
            {
                for (int i = 0; i < n / 2; i++)
                {
                    if (s[i] == '?' && s[n - i - 1] == '?')
                    {
                        if (b < 2 && a < 2)
                        {
                            f = false;
                            break;
                        }
                        if (b >= 2)
                        {
                            s[i] = '1';
                            s[n - i - 1] = '1';
                            b -= 2;
                        }
                        else if(a >= 2)
                        {
                            s[i] = '0';
                            s[n - i - 1] = '0';
                            a -= 2;
                        }
                    }
                }
            }
            if (!f)
                cout << "-1" << endl;
            else
            {
                if (n % 2)
                {
                    if (s[n / 2] == '?')
                    {
                        if (b)
                            s[n / 2] = '1';
                        else if (a)
                            s[n / 2] = '0';
                        else
                        {
                            f = false;
                            break;
                        }
                    }
                }
                int c0 = 0, c1 = 0;
                for (int i = 0; i < n / 2; i++)
                {
                    if (s[i] != s[n - i - 1])
                    {
                        f = false;
                        break;
                    }
                    else
                    {
                        if (s[i] == '0')
                            c0 += 2;
                        else
                            c1 += 2;
                    }
                }
                if (n % 2)
                {
                    if (s[n / 2] == '0')
                        c0++;
                    else
                        c1++;
                    cout << c0 << " " << c1 << endl;
                    cout << s << endl;
                }
                if (c0 != ta || c1 != tb)
                    f = false;
                if (f)
                    cout << s << endl;
                else
                    cout << "-1" << endl;
            }
        }
        cout << endl;
    }
}

// ??00?101??1?0?100??