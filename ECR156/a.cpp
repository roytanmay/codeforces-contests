#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 6)
            pno;
        else
        {
            int x = 1;
            n--;
            int y = 2, z = n - 2;
            if (z % 3)
            {
                pyes;
                cout << x << " " << y << " " << z << endl;
            }
            else if (z % 3 == 0 && z > 6)
            {
                y += 2;
                z -= 2;
                pyes;
                cout << x << " " << y << " " << z << endl;
            }
            else
                pno;
        }
        cout << endl;
    }
}