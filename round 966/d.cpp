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
        vector<int> a(n), psum(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        string s;
        cin >> s;

        int sum = 0, ans = 0;
        psum[0] = a[0];
        for (int i = 1; i < n; i++)
            psum[i] = psum[i - 1] + a[i];
        sum = psum[n - 1];

        pair<int, int> p = make_pair(0, 0);
        stack<int> r;
        queue<int> l;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {

                l.push(i);
            }
            else
            {
                r.push(i);
            }
        }

        while (!l.empty() && !r.empty())
        {
            int left = l.front();
            l.pop();
            int right = r.top();
            r.pop();

            if (left > right)
                continue;

            int temp = psum[right];
            if (left > 0)
                temp -= psum[left - 1];
            ans += temp;
        }

        cout << ans << endl;
    }
}