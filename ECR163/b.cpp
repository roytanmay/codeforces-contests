#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

bool isSorted(vector<int> &v)
{
    for (int i = 1; i < (int)v.size(); i++)
    {
        if (v[i - 1] > v[i])
            return false;
    }
    return true;
}

int f(vector<int> &a, vector<vector<int>> &digits, map<pair<int, int>, int> &dp, int &n, int i, int num)
{
    if (i >= n)
        return true;
    if (dp.count({i, num}))
        return dp[{i, num}];
    int res = 0;
    if (a[i] >= num)
        res = res | f(a, digits, dp, n, i + 1, a[i]);
    if (isSorted(digits[i]) && digits[i][0] >= num)
        res = res | f(a, digits, dp, n, i + 1, digits[i].back());
    return dp[{i, num}] = res;
}

// bool solve(vector<int>& a, int& n)
// {
//     vector<vector<int>> digits(n);
//     for(int i=0; i<n; i++)
//     {
//         int num = a[i];
//         while (num)
//         {
//             digits[i].push_back(num%10);
//             num /= 10;
//         }
//         reverse(digits[i].begin(), digits[i].end());
//     }
//     vector<int> arr;
//     if(isSorted(digits[0]) && a[0]%10 <= a[1])
//     {
//         for(auto i: digits[0]) arr.push_back(i);
//     }
//     else arr.push_back(a[0]);

//     for(int i=1; i<n; i++)
//     {

//     }
// }

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<vector<int>> digits(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int num = a[i];
            if (num == 0)
                digits[i].push_back(0);
            else
            {
                while (num)
                {
                    digits[i].push_back(num % 10);
                    num /= 10;
                }
                reverse(digits[i].begin(), digits[i].end());
            }
        }
        map<pair<int, int>, int> dp;
        int ans = f(a, digits, dp, n, 0, -1);
        if (ans == 1)
            pyes;
        else
            pno;
        // cout << endl;
    }
}