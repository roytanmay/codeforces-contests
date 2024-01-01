#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;

        if (b >= 0)
            cout << (a + b) * n << endl;
        else
        {
            long long c = 0;
            for (long long i = 0; i < n - 1; i++)
            {
                if (s[i] != s[i + 1])
                    c++;
            }

            c++;
            if (c > 2)
                c = (c / 2) + 1;

            cout << a * n + b * c << endl;
        }
    }

    return 0;
}