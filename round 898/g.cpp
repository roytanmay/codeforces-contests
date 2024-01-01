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
        string str;
        cin >> str;
        int n = str.size();
        if (n == 1)
            cout << "0" << endl;
        else
        {
            vector<int> v;
            int s = -1;
            bool f = false;
            for (int i = 0; i < n; i++)
            {
                if (str[i] == 'B')
                {
                    if (s == -1)
                        v.push_back(i);
                    else
                        v.push_back(i - s - 1);
                    if (i == s + 1)
                        f = true;
                    s = i;
                }
            }
            // if (s == n - 1 && !f)
            v.push_back(n - 1 - s);

            if (v.size() == 0)
                cout << "0" << endl;
            else
            {
                int sum = 0, mini = INT_MAX;
                for (auto i : v)
                {
                    sum += i;
                    mini = min(mini, i);
                }
                // if (!f)
                sum -= mini;
                cout << sum << endl;
            }
        }

        cout << endl;
    }
}