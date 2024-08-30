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
        int n, k;
        cin >> n >> k;
        vector<int> b(n);
        vector<pair<int, int>> a(n);
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            a[i] = {x, i};
        }
        for(int i=0; i<n; i++) cin >> b[i];
        sort(a.begin(), a.end());
        if(b[a[n-1].second] == 1)
        {
            int ind = n/2;
            cout << a[n-1].first + k + a[ind].first << endl;
        }
        else
        {
            
        }
        cout << endl;
    }
}