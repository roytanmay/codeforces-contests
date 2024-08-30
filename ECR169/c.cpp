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
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            pq.push(a);
        }
        int A = 0, B = 0;
        while (!pq.empty())
        {
            A += pq.top();
            pq.pop();

            if (!pq.empty())
            {
                int b = pq.top();
                pq.pop();
                int mini = min(max(A - B - b, 0LL), k);
                k -= mini;
                b += mini;
                B += b;
            }
        }
        cout << A - B << endl;
    }
}