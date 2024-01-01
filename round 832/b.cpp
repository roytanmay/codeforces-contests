#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        cout << n / 2 + n % 2 << endl;

        int s = 1, e = 3 * n;
        while (s < e)
        {
            cout << s << " " << e << endl;
            s += 3;
            e -= 3;
        }
    }
    return 0;
}