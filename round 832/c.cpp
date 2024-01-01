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

        long long arr[n], count = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long min = 1000000000;
        long long min_i;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                min_i = i;
            }
        }

        if (min_i == 0)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    }

    return 0;
}