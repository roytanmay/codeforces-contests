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

        bool f = true;
        int turn = 0;
        for (int i = 0; i < n; i++)
        {
            int ind = -1, type = 0;
            int m = s.size();

            // cout << s << endl;

            // if (m == 2)
            // {
            //     if (turn == 0)
            //         f = false;
            //     else
            //         f = true;
            //     break;
            // }

            for (int j = 0; j < m; j++)
            {
                if (s[j] == 'D')
                    continue;
                if (s[(j - 1 + m) % m] == 'U' && s[(j + 1) % m] == 'U')
                {
                    ind = j;
                    type = 2;
                    break;
                }
                if ((s[(j - 1 + m) % m] == 'D' && s[(j + 1) % m] == 'U') || (s[(j - 1 + m) % m] == 'U' && s[(j + 1) % m] == 'D'))
                {
                    ind = j;
                    type = 1;
                }
                else if (type < 1)
                {
                    ind = j;
                    type = 0;
                }
            }

            if (ind == -1)
            {
                if (turn == 0)
                    f = false;
                else
                    f = true;
                break;
            }

            if (m > 2)
            {
                if (s[(ind - 1 + m) % m] == 'U')
                    s[(ind - 1 + m) % m] == 'D';
                else
                    s[(ind - 1 + m) % m] == 'U';

                if (s[(ind + 1) % m] == 'U')
                    s[(ind + 1) % m] == 'D';
                else
                    s[(ind + 1) % m] == 'U';
            }

            if (m == 1)
            {
                if (turn == 0)
                    f = true;
                else
                    f = false;
                break;
            }

            string temp = "";
            for (int j = 0; j < m; j++)
            {
                if (j != ind)
                    temp += s[j];
            }
            s = temp;
            turn = !turn;
        }

        if (f)
            pyes;
        else
            pno;
    }
}