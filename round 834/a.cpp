#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        bool res = true;
        for (int i = 0; i < str.size() - 1; i++)
        {
            if (str[i] == 'Y')
            {
                if (str[i + 1] != 'e')
                {
                    res = false;
                    break;
                }
            }
            else if (str[i] == 'e')
            {
                if (str[i + 1] != 's')
                {
                    res = false;
                    break;
                }
            }
            else if (str[i] == 's')
            {
                if (str[i + 1] != 'Y')
                {
                    res = false;
                    break;
                }
            }
            else
            {
                res = false;
                break;
            }
        }

        if (str.size() == 1)
        {
            if (str[0] == 'Y' || str[0] == 'e' || str[0] == 's')
                res = true;
            else
                res = false;
        }

        if (res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}