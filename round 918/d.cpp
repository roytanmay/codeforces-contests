#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e';
}

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
        if (n <= 3)
            cout << str << endl;
        else
        {
            vector<int> ind;
            for (int i = 0; i < n; i++)
            {
                if (isVowel(str[i]))
                    ind.push_back(i);
            }
            string ans = "";
            int s = 0, e = 0;
            for (int i = 0; i < (int)ind.size() - 1; i++)
            {
                if (ind[i + 1] - ind[i] > 2)
                    e = ind[i] + 1;
                else
                    e = ind[i];

                while (s <= e)
                {
                    ans += str[s];
                    s++;
                }
                ans += '.';
            }

            while (s < n)
            {
                ans += str[s];
                s++;
            }

            cout << ans << endl;
        }
        // cout << endl;
    }
}