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
        string s;
        cin >> s;
        int m;
        cin >> m;
        string l, r;
        cin >> l >> r;
        // vector<vector<int>> v(10, vector<int>(10, 0));
        vector<int> firstIndex(10, -1);
        vector<int> freq(10, 0);
        int n = s.size();
        int prev = s[n - 1] - '0';
        firstIndex[prev] = n - 1;
        for (int i = n - 2; i >= 0; i--)
        {
            int curr = s[i] - '0';
            freq[curr]++;
            // v[curr][prev]++;
            // for (int j = 0; j < 10; j++)
            //     v[curr][j] += v[prev][j];
            // if (firstIndex[curr] == -1)
            firstIndex[curr] = i;
            prev = curr;
        }
        prev = -1;
        int p = -1;
        int c = 0;
        for (int i = 0; i < m; i++)
        {
            int curr = (int)(l[i] - '0');
            int ind = firstIndex[curr];
            for (int j = (l[i] - '0') + 1; j <= r[i] - '0'; j++)
            {
                if (firstIndex[j] < ind)
                {
                    ind = min(ind, firstIndex[j]);
                    curr = j;
                }
            }
            // cout << ind << endl;
            if (ind == -1)
                break;
            if (ind > p)
                c++;
            else if (ind == p && freq[curr] > 1)
            {
                c++;
                freq[curr]--;
            }
            p = ind;
        }
        if (c == m)
            pno;
        else
            pyes;
        cout << endl;
    }
}