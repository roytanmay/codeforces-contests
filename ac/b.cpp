#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    bool cond1 = false, cond2 = false, cond3 = true;

    char c1[4] = {'H', 'D', 'C', 'S'}, c2[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};

    for (int i = 0; i < n; i++)
    {
        string t = s[i];
        for (int j = 0; j < 4; j++)
        {
            if (t[0] == c1[j])
            {
                cond1 = true;
                break;
            }
            else
                cond1 = false;
        }

        if (!cond1)
            break;

        for (int j = 0; j < 13; j++)
        {
            if (t[1] == c2[j])
            {
                cond2 = true;
                break;
            }
            else
                cond2 = false;
        }

        if (!cond2)
            break;
    }

    sort(s.begin(), s.end());

    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            cond3 = false;
            break;
        }
    }

    if (cond1 && cond2 && cond3)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}