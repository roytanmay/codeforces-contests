#include <iostream>
using namespace std;

long long factorial(long long n)
{
    if (n == 0)
        return 1;

    long long res = factorial(n - 1);
    long long ans = n * res;

    return ans;
}

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long a[n];
        for (long long i = 0; i < n; i++)
            cin >> a[i];

        long long ans = 0, i = 0, count = 0;
        while (i < n)
        {
            count = 0;
            long long j;
            for (j = i; j < n; j++)
            {
                if (a[j] >= j - i + 1)
                    count++;
                else
                    break;
            }

            ans += factorial(count);
            i = j;
        }

        cout << ans << endl;
    }
    return 0;
}