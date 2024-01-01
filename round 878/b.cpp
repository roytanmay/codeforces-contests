#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

int binexpo(int a, int b)
{
    if (b == 0)
        return 1;
    int res = binexpo(a, b / 2);
    if (b % 2)
        return res * res * a;
    return res * res;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string bin = "";
        int temp = n;
        while (temp)
        {
            if (temp % 2)
                bin += '1';
            else
                bin += '0';
            temp /= 2;
        }
        reverse(bin.begin(), bin.end());
        int c = 0;
        for (int i = 0; i < bin.size() && i < k; i++)
        {
            if (i == '1')
                c++;
        }
        // cout << c << endl;
        if (bin.size() <= k)
            cout << n + 1 << endl;
        else
            cout << binexpo(2, k) << endl;
        cout << endl;
    }
}