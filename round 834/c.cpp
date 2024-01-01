#include <bits/stdc++.h>
using namespace std;

int solve(long long l, long long r, long long x, long long a, long long b)
{
    if (a == b)
        return 0;
    else if (abs(a - b) >= x)
        return 1;

    if (max(abs(a - l), abs(a - r)) >= x)
    {

        if (abs(a - l) > abs(a - r))
        {
            if (abs(l - b) >= x)
                return 2;

            else if (abs(r - a) >= x && abs(r - b) >= x)
                return 2;
            else if (abs(r - b) >= x)
                return 3;

            return -1;
        }
        else
        {
            if (abs(r - b) >= x)
                return 2;
            else if (abs(a - l) >= x && abs(l - b) >= x)
                return 2;
            else if (abs(l - b) >= x)
                return 3;

            return -1;
        }
    }
    return -1;
}

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long l, r, x, a, b;
        cin >> l >> r >> x;
        cin >> a >> b;

        cout << solve(l, r, x, a, b) << endl;
    }

    return 0;
}