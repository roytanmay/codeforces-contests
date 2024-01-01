#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

// bool isPossible(vector<int> &v, int &n, int mid)
// {
//     unordered_map<int, int> mp, mp2;
//     int i = 0;
//     while (i < n)
//     {
//         mp[v[i]]++;
//         i += (mid + 1);
//     }
//     if (mp.size() == 1)
//         return true;
//     if (mp.size() == 2)
//     {
//         int mini = INT_MAX;
//         for (auto [j, c] : mp)
//             mini = min(mini, c);
//         if (mini == 1)
//             return true;
//     }

//     i = mid;
//     while (i < n)
//     {
//         mp2[v[i]]++;
//         i += (mid + 1);
//     }
//     if (mp2.size() == 1)
//         return true;
//     if (mp2.size() == 2)
//     {
//         int mini2 = INT_MAX;
//         for (auto [j, c] : mp2)
//             mini2 = min(mini2, c);
//         if (mini2 == 1)
//             return true;
//     }
//     return false;
// }

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        vector<vector<int>> color(k + 1);
        vector<vector<int>> diff(k + 1);
        for (int i = 0; i < n; i++)
            color[v[i] - 1].push_back(i);
        int ans = INT_MAX;
        for (int i = 0; i < k; i++)
        {
            int l = color[i].size();
            if(l == 0) continue;
            diff[i].push_back(color[i][0]);
            for (int j = 1; j < l; j++)
                diff[i].push_back(color[i][j] - color[i][j - 1] - 1);
            diff[i].push_back(n - color[i][l - 1] - 1);

            sort(diff[i].begin(), diff[i].end());
            int m = diff[i].size();
            int maxi = diff[i][m - 1], c = 0;
            int j = m - 1;
            while (j >= 0 && diff[i][j] == maxi)
            {
                c++;
                j--;
            }
            if (c > 1)
                ans = min(ans, maxi);
            else
                ans = min(ans, max(maxi / 2, diff[i][m - 2]));
        }
        cout << ans << endl;
        cout << endl;
    }
}