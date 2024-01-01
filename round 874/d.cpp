#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

bool cmp(vector<int> &temp, vector<int> &ans, int &n)
{
    for (int i = 0; i < n; i++)
    {
        if (ans[i] > temp[i])
            return false;
        if (ans[i] < temp[i])
            return true;
    }
    return false;
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
        vector<int> ans(n, 0), temp(n, 0);
        int index = max_element(a.begin(), a.end()) - a.begin();
        if (index == 0)
            index = max_element(a.begin() + 1, a.end()) - a.begin();
        int k = 0;
        for (int j = index; j < n; j++)
        {
            temp[k] = a[j];
            k++;
        }
        int l = k;
        for (int i = 0; i < index; i++)
        {
            temp[k] = a[i];
            k++;
        }
        if (index == n - 1)
        {
            ans = temp;
        }

        for (int i = 0; i < index; i++)
        {
            k = l;
            for (int j = index - 1; j >= i; j--)
            {
                temp[k] = a[j];
                k++;
            }
            for (int j = 0; j < i; j++)
            {
                temp[k] = a[j];
                k++;
            }
            if (cmp(temp, ans, n))
            {
                ans = temp;
            }
        }

        for (auto i : ans)
            cout << i << " ";
        cout << endl;
        cout << endl;
    }
}