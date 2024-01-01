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
        vector<int> b(n + 2);
        unordered_map<int, int> mp;
        int sum = 0;
        for (int i = 0; i < n + 2; i++)
            cin >> b[i];
        for (int i = 0; i < n + 2; i++)
        {
            mp[b[i]]++;
            sum += b[i];
        }
        bool f = false;
        int temp;
        for (auto i : b)
        {
            temp = sum - i;
            if (temp % 2 == 0)
            {
                if (temp / 2 == i && mp[temp / 2] >= 2)
                {
                    f = true;
                    mp[temp / 2]--;
                    mp[i]--;
                    break;
                }
                if (temp / 2 != i && mp[temp / 2] >= 1)
                {
                    f = true;
                    mp[temp / 2]--;
                    mp[i]--;
                    break;
                }
            }
        }
        if (f)
        {
            for (auto i : b)
            {
                if (mp[i] >= 1)
                {
                    cout << i << " ";
                    mp[i]--;
                }
            }
            cout << endl;
        }
        else
            cout << "-1" << endl;
        cout << endl;
    }
}