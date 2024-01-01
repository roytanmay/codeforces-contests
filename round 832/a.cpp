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

        long long arr[n];

        for (long long i = 0; i < n; i++)
            cin >> arr[i];

        long long s1 = 0, s2 = 0;
        for (long long i = 0; i < n; i++)
        {
            if (arr[i] < 0)
                s2 += arr[i];
            else
                s1 += arr[i];
        }

        if (s1 > abs(s2))
            cout << s1 - abs(s2) << endl;
        else
            cout << abs(s2) - s1 << endl;
    }
    return 0;
}