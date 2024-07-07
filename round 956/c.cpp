#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
#define int long long
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl

vector<pair<int, int>> fun(vector<int> &v, int n, int t)
{
    vector<pair<int, int>> res;
    int s = 0, e = 0, curr = 0;

    while (e < n)
    {
        int prevs = s, preve = e;
        curr += v[e];
        e++;

        while (e < n && curr + v[e] <= t)
        {
            curr += v[e];
            preve = e;
            e++;
        }

        if (curr >= t)
            res.push_back(make_pair(prevs, preve));

        while (s <= e && s < n && curr - v[s] >= t)
        {
            curr -= v[s];
            prevs = s;
            s++;
        }

        if (curr >= t)
            res.push_back(make_pair(s, preve));
    }

    return res;
}

vector<int> fun2(vector<pair<int, int>> &a, vector<pair<int, int>> &b, vector<pair<int, int>> &c, int n, string order)
{
    vector<int> ans;

    for (auto p : a)
    {
        if ((int)ans.size() > 0)
            break;

        int l = p.first, r = p.second;

        int ind = lower_bound(b.begin(), b.end(), make_pair(r + 1, -1LL)) - b.begin();

        if (ind < (int)b.size())
        {
            int l2 = b[ind].first, r2 = b[ind].second;

            ind = lower_bound(c.begin(), c.end(), make_pair(r2 + 1, -1LL)) - c.begin();

            if (ind < (int)c.size())
            {

                if (order == "123")
                {
                    ans.push_back(l + 1);
                    ans.push_back(r + 1);
                    ans.push_back(l2 + 1);
                    ans.push_back(r2 + 1);
                    ans.push_back(c[ind].first + 1);
                    ans.push_back(c[ind].second + 1);
                }
                else if (order == "132")
                {
                    ans.push_back(l + 1);
                    ans.push_back(r + 1);
                    ans.push_back(c[ind].first + 1);
                    ans.push_back(c[ind].second + 1);
                    ans.push_back(l2 + 1);
                    ans.push_back(r2 + 1);
                }
                else if (order == "213")
                {
                    ans.push_back(l2 + 1);
                    ans.push_back(r2 + 1);
                    ans.push_back(l + 1);
                    ans.push_back(r + 1);
                    ans.push_back(c[ind].first + 1);
                    ans.push_back(c[ind].second + 1);
                }

                else if (order == "231")
                {
                    ans.push_back(c[ind].first + 1);
                    ans.push_back(c[ind].second + 1);
                    ans.push_back(l + 1);
                    ans.push_back(r + 1);
                    ans.push_back(l2 + 1);
                    ans.push_back(r2 + 1);
                                }

                else if (order == "312")
                {
                    ans.push_back(l2 + 1);
                    ans.push_back(r2 + 1);
                    ans.push_back(c[ind].first + 1);
                    ans.push_back(c[ind].second + 1);
                    ans.push_back(l + 1);
                    ans.push_back(r + 1);
                }
                else
                {
                    ans.push_back(c[ind].first + 1);
                    ans.push_back(c[ind].second + 1);
                    ans.push_back(l2 + 1);
                    ans.push_back(r2 + 1);
                    ans.push_back(l + 1);
                    ans.push_back(r + 1);
                }
            }
        }
    }

    return ans;
}

signed main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n), c(n);
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
        }
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
            cin >> c[i];

        int target = (total / 3);
        if (total % 3 > 0)
            target++;

        vector<pair<int, int>> ra = fun(a, n, target), rb = fun(b, n, target), rc = fun(c, n, target);

        sort(ra.begin(), ra.end());
        sort(rb.begin(), rb.end());
        sort(rc.begin(), rc.end());

        vector<int> ans;

        ans = fun2(ra, rb, rc, n, "123");
        if ((int)ans.size() == 0)
            ans = fun2(ra, rc, rb, n, "132");
        if ((int)ans.size() == 0)
            ans = fun2(rb, ra, rc, n, "213");
        if ((int)ans.size() == 0)
            ans = fun2(rb, rc, ra, n, "231");
        if ((int)ans.size() == 0)
            ans = fun2(rc, ra, rb, n, "312");
        if ((int)ans.size() == 0)
            ans = fun2(rc, rb, ra, n, "321");

        if ((int)ans.size() == 0)
            cout << "-1" << endl;
        else
        {
            for (auto i : ans)
                cout << i << " ";
            cout << endl;
        }
    }
}