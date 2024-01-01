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
        if (n % 2)
            cout << "-1" << endl;
        else
        {
            int c1 = 0, c2 = 0;
            unordered_map<int, int> b1, b2;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '(')
                {
                    c1++;
                    if (c1 <= c2)
                        b2[i]++;
                    else
                        b1[i]++;
                }
                else
                {
                    c2++;
                    if (c1 < c2)
                        b2[i]++;
                    else
                        b1[i]++;
                }
            }
            if (c1 != c2)
                cout << "-1" << endl;
            else
            {
                if (b1.size() && b2.size())
                {
                    cout << "2" << endl;
                    for (int i = 0; i < n; i++)
                    {
                        if (b1.count(i))
                            cout << "1 ";
                        else
                            cout << "2 ";
                    }
                    cout << endl;
                }
                else
                {
                    cout << "1" << endl;
                    for (int i = 0; i < n; i++)
                        cout << "1 ";
                    cout << endl;
                }
            }
        }
        cout << endl;
    }
}