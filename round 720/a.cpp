#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;

    while(t--)
    {
        long long a, b;
        cin >> a >> b;

        if(b==1)
        cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << a << " " << a*b << " " << a*(b+1) << endl;
        }
    }

    return 0;
}