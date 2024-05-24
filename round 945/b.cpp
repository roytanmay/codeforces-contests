#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

vector<int> bin(int a)
{
    vector<int> res(32, 0);
    int i = 31;
    while (a)
    {
        res[i] = a % 2;
        a /= 2;
        i--;
    }
    return res;
}

bool isPossible(vector<vector<int>> &v, int &n, int mid)
{
    vector<int> b1(32, 0), b2(32, 0);
    for (int i = 0; i < mid; i++)
    {
        for (int j = 0; j < 32; j++)
        {
            b1[j] += v[i][j];
            b2[j] = b1[j];
        }
    }

    int s = 0;
    for (int i = mid; i < n; i++)
    {
        for (int j = 0; j < 32; j++)
        {
            b2[j] -= v[s][j];
            b2[j] += v[i][j];

            if ((b2[j] <= 0 && b1[j] > 0) || (b2[j] > 0 && b1[j] <= 0))
                return false;
        }
        s++;
    }

    return true;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, a;
        cin >> n;
        vector<vector<int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v[i] = bin(a);
        }

        int s = 1, e = n, mid, ans = n;
        while (s <= e)
        {
            mid = s + (e - s) / 2;
            if (isPossible(v, n, mid))
            {
                ans = mid;
                e = mid - 1;
            }
            else
                s = mid + 1;
        }

        cout << ans << endl;
    }
}