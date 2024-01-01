#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        if (n == 1)
            cout << k << endl;
        else
        {
            if (n > k)
            {
                long long a = n / k, b = n % k;
                if (b)
                    a++;

                k *= a;
            }

            long long c = k / n, d = k % n;
            if (d)
                c++;

            cout << c << endl;
        }
    }
    return 0;
}