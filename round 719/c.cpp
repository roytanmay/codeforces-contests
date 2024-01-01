#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (n == 2)
            cout << -1 << endl;
        else
        {
            long long t1 = 1, t2 = ((n * n) / 2) + 1;
            if (n % 2)
                t2 = ((n * n + 1) / 2) + 1;

            for (long long i = 1; i <= n; i++)
            {
                for (long long j = 1; j <= n; j++)
                {
                    if ((i + j) % 2)
                    {
                        cout << t2 << " ";
                        t2++;
                    }
                    else
                    {
                        cout << t1 << " ";
                        t1++;
                    }
                }
                cout << endl;
            }
        }
    }

    return 0;
}