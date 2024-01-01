#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

bool isPossible(vector<vector<int>> &prefixSumOfBits, vector<int> &kbin, int l, int r, int k)
{
    int num = 0, bits = 0;
    for (int j = 0; j < 32; j++)
    {
        bits = prefixSumOfBits[r][j];
        if (l > 0)
            bits -= prefixSumOfBits[l - 1][j];
        if (bits == r - l + 1)
            num |= (1 << j);
    }
    return num >= k;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<vector<int>> prefixSumOfBits(n, vector<int>(32, 0));
        for (int i = 0; i < n; i++)
        {
            int ele = a[i];
            for (int j = 0; j < 32; j++)
            {
                prefixSumOfBits[i][j] = ele % 2;
                if (i > 0)
                    prefixSumOfBits[i][j] += prefixSumOfBits[i - 1][j];
                ele /= 2;
            }
        }
        int q;
        cin >> q;
        vector<int> kbin(32);
        while (q--)
        {
            int l, k;
            cin >> l >> k;
            l--;
            if (a[l] < k)
                cout << "-1 ";
            else
            {
                int temp = k;
                for (int j = 0; j < 32; j++)
                {
                    kbin[j] = temp % 2;
                    temp /= 2;
                }
                int res = l, s = l, e = n - 1, mid;
                while (s <= e)
                {
                    mid = s + (e - s) / 2;
                    if (isPossible(prefixSumOfBits, kbin, l, mid, k))
                    {
                        res = mid;
                        s = mid + 1;
                    }
                    else
                        e = mid - 1;
                }
                cout << res + 1 << " ";
            }
        }
        cout << endl;
    }
}