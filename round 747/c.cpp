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
        char ch;
        cin >> ch;
        string s;
        cin >> s;
        int countch = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ch)
                countch++;
        }
        if (countch == n)
            cout << "0" << endl;
        else if (countch + 1 == n)
        {
            cout << "1" << endl;
            if (s[n - 1] != ch)
                cout << n - 1 << endl;
            else
                cout << n << endl;
        }
        else if (s[n - 1] == ch)
        {
            cout << "1" << endl;
            cout << n << endl;
        }
        else
        {
            bool f = false;
            int res;
            for (int i = n - 1; i >= n / 2; i--)
            {
                if (s[i] == ch)
                {
                    f = true;
                    res = i + 1;
                    break;
                }
            }
            if (f)
            {
                cout << "1" << endl;
                cout << res << endl;
            }
            else
            {
                cout << "2" << endl;
                cout << n - 1 << " " << n << endl;
            }
        }
        cout << endl;
    }
}